//
// Created by magda on 05.01.20.
//

#include "TabuSearch.h"
#include "Matrix.h"

#include<cmath>
#include <iostream>
#include <algorithm>

TabuSearch::TabuSearch() {
    minCost=INT32_MAX;
    tabu_size=pow(cities,2);
    minPath.resize(cities);
}

TabuSearch::~TabuSearch() {
    minPath.clear();
}

void TabuSearch::solve() {
    vector<int> curPath;
    curPath.resize(cities);
    curPath = random_solution();
    vector<vector<int>> neighbors;
    tabu.push_back(curPath);
    for (auto i = 0; i < pow(cities,2); i++) {
        for (auto j = 0; j < 100; j++)
            neighbors.push_back(find_neighbor(curPath));

        for (auto &k : neighbors) {
            if (!(find(tabu.begin(), tabu.end(), k) != tabu.end())&& cost(k)<cost(curPath)) {
                curPath = k;
            }
        }
        if (cost(curPath) < minCost) {
            minPath = curPath;
            minCost = cost(curPath);
        }
        tabu.push_back(curPath);
        if (tabu.size() > tabu_size) {
            tabu.erase(tabu.begin());
        }
    }

    cout << "\nZnaleziona droga: " << minCost;
    cout << "\nKolejność miast: ";
    for (auto i = 0; i < minPath.size(); i++) {
        cout << " " << minPath[i];
    }



}