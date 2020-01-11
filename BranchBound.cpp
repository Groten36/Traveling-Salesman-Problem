//
// Created by magda on 05.01.20.
//



#include<cmath>
#include "BranchBound.h"
#include <thread>
#include <mutex>

BranchBound::BranchBound() {
    this->minCost=INT32_MAX;

    minPath.resize(cities);
    visited.resize(cities);
}

BranchBound::~BranchBound() {
    this->minCost=0;

    // this->visited.clear();
    // this->visited.clear();

    this->minPath.clear();
}

int BranchBound::min1(int node) {
    int min=INT32_MAX;
    for(auto j=0;j<cities;j++) {
        if (node != j)
            min = std::min(min, head[node][j]);
    }

    return min;
}

int BranchBound::min2(int node){

    int min1 = INT32_MAX, min2 = INT32_MAX;
    for (int j=0; j<cities; j++)
    {
        if (node == j)
            continue;

        if (head[node][j] <= min1)
        {
            min2 = min1;
            min1 = head[node][j];
        }
        else if (head[node][j] <= min2 && head[node][j] != min1)
            min2 = head[node][j];
    }
    return min2;
}


void BranchBound::reduction(int curBound, int depth,int curCost,vector<int> curPath,vector<bool>visited,int start,int end){

    int tBound=0;
    int fin;
    mutex mx;
    if(depth==curPath.size()){
        mx.lock();
        if (head[curPath[depth-1]][curPath[0]] != -1){
            fin = curCost +head[curPath[depth-1]][curPath[0]];

                    if (fin < minCost){
                        minPath=curPath;
                        minCost = fin;
                    }
                }
                mx.unlock();

                return;
            }
            for(auto i=start;i<end;i++){

                mx.lock();
                if(i>=cities)
                    return;
                if(head[curPath[depth-1]][i] != -1 && visited[i]==false) {
                    tBound = curBound;
                    curCost += head[curPath[depth - 1]][i];
                    if (depth == 1)
                        curBound -= ((min2(curPath[depth - 1]) + min2(i)) / 2);
                    else
                        curBound -= ((min1(curPath[depth - 1]) + min2(i)) / 2);
                    if (curBound + curCost < minCost) {
                        curPath[depth] = i;
                        visited[i] = true;
                        reduction(curBound, depth + 1, curCost, curPath, visited, 0, cities);
                    }
                    curCost -= head[curPath[depth - 1]][i];
                    curBound = tBound;

                    for (auto j = 0; j < cities; j++)
                        visited[j] = false;
                }

                for(auto j=0;j<depth-1;j++)
                    visited[curPath[j]]=true;
                mx.unlock();
            }

        }



    }
    void BranchBound::solve(int threads){
        int curBound=0;
        int start=1;
        int e=(cities-1)/threads;
        vector<int> curPath;

        vector<bool> visited;
        vector<thread> thread_pool;
        curPath.resize(cities);
        for(auto i=0;i<cities;i++)
            curPath[i]=-1;
        visited.resize(cities);
        for(auto i=0;i<cities;i++){
            visited[i]=false;
        }



        for(auto i =0;i<cities;i++)
            curBound+=min1(i)+min2(i);
        curBound=round(curBound/2);
        curPath[0]=0;
        visited[0]=true;
        if(threads!=1){


        for(auto i=0;i<threads-1;i++) {
            thread_pool.emplace_back(thread{ [&]() {
                reduction(curBound,1,0,curPath,visited,start,start+e);

            }});
            start+=e;
        }

        for(auto & t : thread_pool) {
            t.join();

        }}
    else{
        reduction(curBound,1,0,curPath,visited,0,cities);
    }
    std::cout<<"\nNajkrótsza scieżka: "<<minCost;
    std::cout<<"\nKolejność odwiedzanych miast: ";
    for(auto i=0;i<cities;i++)
        std::cout<<" "<<minPath[i];
    curPath.clear();
    visited.clear();

};