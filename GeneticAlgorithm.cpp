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
    generations=10*cities;
    numberOfParticipants=32;
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
    numberOfParticipants=int(population.size()/10);
    vector<vector<int>> participants;
    vector<int> winner;
    vector<vector<int>> toReproduction;
    int best,cur;
    int positionOfWinner;
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<mt19937::result_type> con(0,pow(cities,2));
    for(auto j=0;j<population.size()/3;j++){
        best=INT32_MAX;
        for(auto i=0;i<numberOfParticipants;i++) {
            participants.push_back(population[con(rng)]);
            cur=cost(population[i]);
            if (cur < best) {
                winner = participants[i];
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
    parent1.resize(cities);
    parent2.resize(cities);
    int pos1,pos2,begin,end,iter;
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<mt19937::result_type> rep(0,toReproduction.size()-1);
    uniform_int_distribution<mt19937::result_type> b(0,cities-2);
    uniform_int_distribution<mt19937::result_type> e(1,cities-1);
    do{
        pos1=rep(rng);
        do{
        pos2=rep(rng);
        }
        while(pos2==pos1);
        parent1=toReproduction[pos1];
        parent2=toReproduction[pos2];
        begin=b(rng);
        do {
            end = e(rng);
        }while(end<=begin);

        for(auto i=begin;i<end+1;i++){
            child1.push_back(parent1[i]);
            child2.push_back(parent2[i]);
        }
        iter=0;
        for(auto i=0;i<parent1.size();i++){
            if(std::find(child2.begin(),child2.end(),parent1[i])==child2.end()){
                if(i<=end){
                    child2.insert(child2.begin()+iter,parent1[i]);
                    iter++;
                }else if(i>end){
                    child2.push_back(parent1[i]);
                }

            }
        }
        iter=0;
        for(auto i=0;i<parent2.size();i++){
            if(std::find(child1.begin(),child1.end(),parent2[i])==child1.end()){
                if(i<=end){
                    child1.insert(child1.begin()+iter,parent2[i]);
                    iter++;
                }else if(i>end){
                    child1.push_back(parent2[i]);
                }
            }
        }

        newPopulation.push_back(child1);
        newPopulation.push_back(child2);
        child1.clear();
        child2.clear();

    }while(newPopulation.size()<populationSize);


    return newPopulation;
}
bool GeneticAlgorithm::mutationOccured() {
    float calculate;
    random_device rd;
    mt19937 rng(rd());
    uniform_real_distribution<> mut(0,100);
    calculate=mut(rng);
    if(calculate<=1.0)
        return true;
    else
        return false;
}
void GeneticAlgorithm::mutation(){
    int pos1,pos2;
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<mt19937::result_type> mut(0,cities-1);
    for(auto i=0;i<population.size();i++){
        if(mutationOccured()){
            pos1=mut(rng);
            do{
                pos2=mut(rng);
            }while(pos1==pos2);
            iter_swap(population[i].begin()+pos1,population[i].begin()+pos2);
        }
    }
}
void GeneticAlgorithm::solve(){
    int best=INT32_MAX;
    vector<int> path;
    populationSize=pow(cities,2);
    generations=10*cities;
    vector<vector<int>> toReproduction;
    generatePopulation();

    for(auto i=0;i<generations;i++){
        toReproduction=tournament();
        population=crossover(toReproduction);
        mutation();
    }
    for(auto i=0;i<population.size();i++){
        if(cost(population[i])<best){
            best=cost(population[i]);
            path=population[i];
        }
    }
    cout<<"\nZnaleziona droga: "<<best;
    cout<<"\nKolejnośc miast: ";
    for(auto i=0;i<path.size();i++)
        cout<<path[i]<<" ";
}