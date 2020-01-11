//
// Created by magda on 10.01.20.
//

#ifndef PEA_GENETICALGORITHM_H
#define PEA_GENETICALGORITHM_H
#include<vector>
#include"Matrix.h";

using namespace std;

class GeneticAlgorithm : public Matrix{
    vector<vector<int>> population;
    int generations;

    void generatePopulation();

    GeneticAlgorithm();
    ~GeneticAlgorithm();
};


#endif //PEA_GENETICALGORITHM_H
