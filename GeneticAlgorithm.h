//
// Created by magda on 10.01.20.
//

#ifndef PEA_GENETICALGORITHM_H
#define PEA_GENETICALGORITHM_H
#include<vector>
#include"Matrix.h"

using namespace std;

class GeneticAlgorithm : public Matrix{
    vector<vector<int>> population;
    int generations;
    int populationSize;
    int numberOfParticipants;
    void generatePopulation();
    vector<vector<int>> crossover(vector<vector<int>> toReproduction);
    void mutation();
    bool mutationOccured();
public:
    void solve();
    vector<vector<int>> tournament();
    GeneticAlgorithm();
    ~GeneticAlgorithm();
};


#endif //PEA_GENETICALGORITHM_H
