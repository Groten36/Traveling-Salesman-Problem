//
// Created by magda on 10.01.20.
//
#include<cmath>
#include<algorithm>
#include<random>
#include "GeneticAlgorithm.h"
GeneticAlgorithm::GeneticAlgorithm() {
    populationSize=pow(cities,2);
    population.resize(populationSize);
    generations=100;
}

GeneticAlgorithm::~GeneticAlgorithm() {
    for (auto i : population)
        population[i].clear();
    population.clear();
    generations=0;
}

void GeneticAlgorithm::generatePopulation() {
    vector<int> individual;
    for(auto i=0;i<cities;i++)
        individual.push_back(i);
    for(auto i=0;i<populationSize;i++){
        shuffle(individual.begin(),individual.end(),random_device());
        population.push_back(individual);
    }
}

void GeneticAlgorithm::solve(){
    generatePopulation();
}