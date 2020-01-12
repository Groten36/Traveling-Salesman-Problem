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
    numberOfParticipants=64;
}

GeneticAlgorithm::~GeneticAlgorithm() {
    for (auto i=0;i< population.size();i++)
        population[i].clear();
    population.clear();
    generations=0;
}

void GeneticAlgorithm::generatePopulation() {
    vector<int> individual;
    for(auto i=0;i<cities;i++)
        individual.push_back(i);
    for(auto i=0;i<pow(cities,2);i++){
        shuffle(individual.begin(),individual.end(),random_device());
        population.push_back(individual);
    }

}

vector<vector<int>> GeneticAlgorithm::tournament(){
    vector<vector<int>> participants;
    vector<int> winner;
    vector<vector<int>> toReproduction;
    int best;
    int positionOfWinner;
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<mt19937::result_type> con(0,pow(cities,2));
    for(auto j=0;j<generations;j++){
        best=INT32_MAX;
        for(auto i=0;i<numberOfParticipants;i++) {
            participants.push_back(population[con(rng)]);
            if (cost(participants[i]) < best) {
                winner = participants[i];
                best = cost(participants[i]);
                positionOfWinner = i;
            }

        }
        toReproduction.push_back(winner);
        participants.erase(participants.begin()+positionOfWinner);
    }
    return toReproduction;

}

vector<vector<int>> GeneticAlgorithm::crossover(vector<vector<int>> toReproduction) {
    vector<vector<int>> newPopulation;
    vector<int> parent1,parent2,child1,child2;
    child1.resize(parent1.size());
    child2.resize(parent2.size());
    int pos1,pos2,begin,end;
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<mt19937::result_type> rep(0,pow(cities,2));
    uniform_int_distribution<mt19937::result_type> cross(0,cities-1);
    do{
        pos1=rep(rng);
        do{
        pos2=rep(rng);
        }
        while(pos2==pos1);
        parent1=toReproduction[pos1];
        parent2=toReproduction[pos2];
        begin=cross(rng);
        do {
            end = cross(rng);
        }while(end<=begin);
        for(auto i=begin;i<end+1;i++){
            child1[i]=parent1[i];
            child2[i]=parent2[i];
        }
        

    }while(newPopulation.size()<populationSize);


}
void GeneticAlgorithm::solve(){
    populationSize=pow(cities,2);
    vector<vector<int>> toReproduction;
    generatePopulation();

    for(auto i=0;i<generations;i++){
        toReproduction=tournament();
        population=crossover(toReproduction);
    }

}