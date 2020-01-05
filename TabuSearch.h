//
// Created by magda on 05.01.20.
//

#ifndef PEA_TABUSEARCH_H
#define PEA_TABUSEARCH_H
#include"Matrix.h"
#include<vector>
class TabuSearch : public Matrix{
public:
    std::vector<std::vector<int>> tabu;
    int tabu_size;
    TabuSearch();
    ~TabuSearch();

    void solve();
};


#endif //PEA_TABUSEARCH_H
