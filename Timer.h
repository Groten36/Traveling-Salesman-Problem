//
// Created by magda on 05.01.20.
//

#ifndef PEA_TIMER_H
#define PEA_TIMER_H
#include<iostream>
#include<chrono>
using namespace std;
using namespace chrono;

class Timer {
public:
    high_resolution_clock::time_point startTime;
    high_resolution_clock::time_point stopTime;

    void start();

    void stop();

    long time();
};


#endif //PEA_TIMER_H
