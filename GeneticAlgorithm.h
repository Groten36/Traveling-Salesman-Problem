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
    int populationSize;
void generatePopulation();
public:
    void solve();
    GeneticAlgorithm();
    ~GeneticAlgorithm();
};


#endif //PEA_GENETICALGORITHM_H
