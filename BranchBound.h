//
// Created by magda on 05.01.20.
//

#ifndef PEA_BRANCHBOUND_H
#define PEA_BRANCHBOUND_H
#include "Matrix.h"

class BranchBound : public Matrix{
    int minCost;
    vector<int> minPath;
    vector<bool> visited;


public:
    int min1(int node);
    int min2(int node);

    void reduction(int curBound, int depth, int curCost,  vector<int> curPath,vector<bool>visited,int start,int end);
    void solve(int threads);
    BranchBound();
    ~BranchBound();
};



#endif //PEA_BRANCHBOUND_H
