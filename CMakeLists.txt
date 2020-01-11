cmake_minimum_required(VERSION 3.14)
project(PEA)

set(CMAKE_CXX_STANDARD 14)

add_executable(PEA main.cpp BranchBound.cpp BranchBound.h BruteForce.cpp BruteForce.h Matrix.cpp Matrix.h Menu.cpp Menu.h SimulatedAnnealing.cpp SimulatedAnnealing.h TabuSearch.cpp TabuSearch.h Timer.cpp Timer.h GeneticAlgorithm.cpp GeneticAlgorithm.h)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")