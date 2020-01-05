//
// Created by magda on 05.01.20.
//

#include "Timer.h"

void Timer::start(){
    startTime = high_resolution_clock::now();
}

void Timer::stop(){
    stopTime=high_resolution_clock::now();
}

long Timer::time(){
    return std::chrono::duration_cast<milliseconds>(stopTime-startTime).count();

}
