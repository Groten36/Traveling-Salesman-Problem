//
// Created by magda on 05.01.20.
//

#ifndef PEA_MATRIX_H
#define PEA_MATRIX_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Matrix {
    vector<vector<int>>head;
    int cities;
    vector<int> minPath;
    int minCost;
    Matrix();
    ~Matrix();
    void read(string fileName);
    void display();
    vector<int> random_solution();
    int cost(vector<int>& vec);
    void clear();
    void random();

    vector<int> greedy();
    vector<int> find_neighbor(vector<int> curPath);


};


#endif //PEA_MATRIX_H
