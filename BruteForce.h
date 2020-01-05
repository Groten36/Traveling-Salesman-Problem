//
// Created by magda on 05.01.20.
//

#ifndef PEA_BRUTEFORCE_H
#define PEA_BRUTEFORCE_H
#include "Matrix.h"
#include<vector>
#include <mutex>

class BruteForce : public Matrix{
    std::vector<int> path;
    int minCost;
    // std::mutex mx;


public:
    BruteForce();
    ~BruteForce();

    void solve(int threads);
    void permute(std::vector<int> curPath,int second,int last);
};


#endif //PEA_BRUTEFORCE_H
