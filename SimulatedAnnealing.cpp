//
// Created by magda on 05.01.20.
//

#include "SimulatedAnnealing.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <random>
SimulatedAnnealing::SimulatedAnnealing() {
    minPath.resize(cities);
    minCost=INT32_MAX;
    t_min=0.0001;
    t=100000.0;
}
SimulatedAnnealing::~SimulatedAnnealing(){

minPath.clear();
minCost=0;
}
vector<int> SimulatedAnnealing::find_neighbor(vector<int> curPath){
    int first = rand() % curPath.size();
    int second;
    do{
        second= rand() % curPath.size();
    }while(first==second);
    iter_swap(curPath.begin()+first,curPath.begin()+second);
    return curPath;
}

double SimulatedAnnealing::propability(vector<int> curPath,vector<int> neighbor){
    return exp(-(cost(neighbor)-cost(curPath))/t);
}
double SimulatedAnnealing::cooling() {
    return 0.9999*t;
}
void SimulatedAnnealing::solve(){
    int i=100;
    vector<int> curPath;
    curPath.resize(cities);
    curPath=random_solution();


    /*for(auto j=0;j<minPath.size();j++){
        cout<<" "<<minPath[j];
    }*/

    for(auto j=0;j<minPath.size();j++){
        cout<<" "<<minPath[j];
    }


            /*for(auto j=0;j<minPath.size();j++){
                cout<<" "<<minPath[j];
            }*/



    vector<int> neighbor;
    neighbor.resize(cities);
    while(t>t_min){
        for(auto k=i;k>0;k--){

                    neighbor=find_neighbor(curPath);
            if(cost(neighbor)<cost(curPath)){
                curPath=neighbor;
            }else if(((double) rand() / (RAND_MAX)) + 1<propability(curPath,neighbor)){
                curPath=neighbor;
            }}
        neighbor=find_neighbor(curPath);
        if(cost(neighbor)<cost(curPath)){
            curPath=neighbor;
        }else if(((double) rand() / (RAND_MAX)) + 1<propability(curPath,neighbor)){
            curPath=neighbor;
        }}

    t=cooling();


minPath=curPath;
minCost=cost(minPath);
cout<<"Znaleziona droga: "<<minCost;
cout<<"\nKolejność miast: ";
for(auto j=0;j<minPath.size();j++){
cout<<" "<<minPath[j];
}
}