//
// Created by magda on 05.01.20.
//

#ifndef PEA_SIMULATEDANNEALING_H
#define PEA_SIMULATEDANNEALING_H
#include "Matrix.h"
#include<iostream>
#include <vector>
using namespace std;

class SimulatedAnnealing :public Matrix{
    double t_min;
    double t;
public:
    SimulatedAnnealing();
    ~SimulatedAnnealing();

    void solve();
    double propability(vector<int> curPath, vector<int> neighbor);
    vector<int> find_neighbor(vector<int> curPath);
    double cooling();
};


#endif //PEA_SIMULATEDANNEALING_H
