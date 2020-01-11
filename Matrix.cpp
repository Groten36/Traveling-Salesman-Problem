//
// Created by magda on 05.01.20.
//

#include "Matrix.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <chrono>
#include <algorithm>
#include <random>
#include "Matrix.h"

Matrix::Matrix(){
    cities=0;
    minCost=INT32_MAX;
}

Matrix::~Matrix(){
    this->cities=0;
    this->head.clear();
}

void Matrix::display(){
    if(this->cities>0){

        std::cout<<cities<<"\n";
        for(auto i=0;i<cities;i++) {
            for (auto j = 0; j < cities; j++){
                std::cout<<head[i][j]<<"  ";
            }
            std::cout<<"\n";
        }
    std::cout<<cities<<"\n";
    for(auto i=0;i<cities;i++) {
        for (auto j = 0; j < cities; j++){
            std::cout<<head[i][j]<<"  ";
        }
        std::cout<<"\n";
    }}
    else
        cout<<"Macierz jest pusta";
}

void Matrix::read(std::string fileName){
    string buff;
    ifstream in;

            fileName = "/home/magda/CLionProjects/TSP/"+fileName + ".txt";


    in.open(fileName);

    if (in.good()){
        getline(in,buff);
        in >> cities;
        head.resize(cities);
        for (auto i = 0; i < cities; i++){
            head[i].resize(cities);
        }

        while(!in.eof()) {
            for (auto i = 0; i < cities; i++) {
                for (auto j = 0; j < cities; j++) {
                    in >> head[i][j];
                }
            }

        }
    }
    else{

        cout << "Blad! PLik nie otworzyL sie poprawnie!" << endl;

    }
    in.close();

}

void Matrix::random(){
    vector<int> rand;
    //int path=0;
    for(auto i=0;i<cities;i++){
        rand.push_back(i);
    }
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(rand.begin(), rand.end(), std::default_random_engine(seed));
    cout<<"Kolejność odwidzanych miast: ";
    for (auto i=0;i<cities;i++){
        cout<<rand[i]<<" ";
        //path+=head[rand[i]][rand[i+1]];
    }

            //  cout<<"DLugosc sceizki :"<<path;

    //  cout<<"DLugosc sceizki :"<<path;
    cout<<"\nDługość ścieżki: "<<cost(rand)<<endl;
}


vector<int> Matrix::random_solution(){
    vector<int> rand;
    //int path=0;
    for(auto i=0;i<cities;i++){
        rand.push_back(i);
    }
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(rand.begin(), rand.end(), std::default_random_engine(seed));
    return rand;
}
int Matrix::cost(vector<int>& vec){
    int path=0,iter=0;

    for(auto i=1;i<vec.size();i++) {

        //   std::cout<<head[vec[i]][vec[i++]]<<" ";
        path += head[vec[iter]][vec[i]];
        iter = i;

        // std::cout<<head[vec[cities-1]][vec[0]];

        //   std::cout<<head[vec[i]][vec[i++]]<<" ";
        path += head[vec[iter]][vec[i]];
        iter = i;
    }
// std::cout<<head[vec[cities-1]][vec[0]];

path+=head[iter][vec[0]];
return path;
}

void Matrix::clear() {
    this->head.clear();
    //this->cities=0;
}


vector<int> Matrix::greedy() {
    vector<int> greed;
    greed.push_back(0);
    //int min=INT32_MAX;
    for(auto i=0;i<cities;i++){

    }
}

vector<int> Matrix::find_neighbor(vector<int> curPath){
    int first = rand() % curPath.size();
    int second;
    do{
        second= rand() % curPath.size();
    }while(first==second);
    iter_swap(curPath.begin()+first,curPath.begin()+second);
    return curPath;

}


