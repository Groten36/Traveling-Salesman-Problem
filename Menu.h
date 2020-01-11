//
// Created by magda on 05.01.20.
//

#ifndef PEA_MENU_H
#define PEA_MENU_H
#include "Matrix.h"
#include "BruteForce.h"
#include "BranchBound.h"
#include "SimulatedAnnealing.h"
#include "TabuSearch.h"
#include "Timer.h"
#include "GeneticAlgorithm.h"
class Menu {
    Matrix matrix;
    int menu;
    BruteForce bf;
    BranchBound bb;

    //DynamicProgramming dp;
    SimulatedAnnealing sa;
    Timer timer;
    TabuSearch ts;
    GeneticAlgorithm ga;
public:
    Menu();
    void launch();

};


#endif //PEA_MENU_H
