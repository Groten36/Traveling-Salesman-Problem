//
// Created by magda on 05.01.20.
//

#include "BruteForce.h"
#include "BruteForce.h"
#include "Matrix.h"
#include <iostream>
#include <algorithm>
#include <thread>
#include <mutex>
BruteForce::BruteForce(){


    minCost=INT32_MAX;
    path.resize(cities);

}

BruteForce::~BruteForce(){
    this->path.clear();
    this->minCost= 0;

}
/*void BruteForce::permute(int k,vector<int> curPath,int start){
    int t;
    int curCost=0;
    int iter=0;
    if(k==1){
        mx.lock();
        curCost=0;
        iter=0;
        for(auto i=1;i<cities;i++){
            curCost+=head[curPath[iter]][curPath[i]];
            iter=i;
        }
        curCost+=head[curPath[iter]][curPath[0]];
        if(curCost<minCost) {
            path = curPath;
            minCost = curCost;
        }
        mx.unlock();
        return;
<<<<<<< HEAD
=======
>>>>>>> 9df73847a68863527942bf04952d29f720e1d51e
    }
    else{
       permute(k-1,curPath,start+1);
        for(auto i=0;i<k;i++) {
            //permute(k-1,curPath);
            if (i % 2 == 0) {
                t = curPath[i];
                curPath[i] = curPath[k - 1];
                curPath[k - 1] = t;
<<<<<<< HEAD
=======
>>>>>>> 9df73847a68863527942bf04952d29f720e1d51e
            } else {
                t = curPath[0];
                curPath[0] = curPath[k - 1];
                curPath[k - 1] = t;
            }
            permute(k - 1, curPath,start+1);
        }
    }
    }
*/
void BruteForce::permute(vector<int> curPath,int second,int last){
    mutex mx;
    int curCost=0,iter=0;
    for(auto k=second;k<last;k++){
        if(k!=0)
            curPath.erase(std::remove(curPath.begin(), curPath.end(), k), curPath.end());

        do{
            // curPath.erase(std::remove(curPath.begin(), curPath.end(), k), curPath.end());

            curCost=0;
            iter=0;
            mx.lock();
            if(k!=0)
                curCost+=(head[0][k]+head[k][curPath[iter]]);
            else
                curCost+=head[0][iter];
            for(auto i=1;i<curPath.size();i++){
                curCost+=head[curPath[iter]][curPath[i]];
                iter=i;
            }
            curCost+=head[curPath[iter]][0];
            if(curCost<minCost) {
                if(k!=0){
                    curPath.insert(curPath.begin(),k);}
                curPath.insert(curPath.begin(),0);
                minPath = curPath;
                minCost = curCost;

            }
            mx.unlock();
        }while(next_permutation(curPath.begin(),curPath.end()));

        do{
            // curPath.erase(std::remove(curPath.begin(), curPath.end(), k), curPath.end());

            curCost=0;
            iter=0;
            mx.lock();
            if(k!=0)
                curCost+=(head[0][k]+head[k][curPath[iter]]);
            else
                curCost+=head[0][iter];
            for(auto i=1;i<curPath.size();i++){
                curCost+=head[curPath[iter]][curPath[i]];
                iter=i;
            }
            curCost+=head[curPath[iter]][0];
            if(curCost<minCost) {
                if(k!=0){
                    curPath.insert(curPath.begin(),k);}
                curPath.insert(curPath.begin(),0);
                path = curPath;
                minCost = curCost;

            }
            mx.unlock();
        }while(next_permutation(curPath.begin(),curPath.end()));

        if(k!=0)
            curPath.insert(curPath.begin(),k);
    }
}
void BruteForce::solve(int threads){
    int start=1,e=(cities-1)/threads;
    vector<int> curPath;
    vector<thread> thread_pool;
    minCost=INT32_MAX;

    for(auto i=1;i<cities;i++){


        curPath.push_back(i);
    }

    if(threads!=1){
        for(auto i=0;i<threads;i++){

            thread_pool.emplace_back(thread{ [&]() {
                permute(curPath,start,start+e);

            }});

            start+=e;
        }


        for(auto & t : thread_pool) {
            t.join();

        }
    }
    else{
        permute(curPath,0,1);
    }




    std::cout<<"\nNajkrotsza droga: "<<minCost;
    std::cout<<"\nKolejnosc odwiedzanych miast: ";
    for(auto i=0;i<cities;i++){

        std::cout<<" "<<minPath[i];
    }



}
