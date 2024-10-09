//
// Created by xxtex on 10/2/2024.
//

#include "getAboveAverage.hpp"

#include <iostream>

#include "./average.hpp"

using namespace std;
void getAboveAverage(int grades[]) {
    int length = sizeof(grades) / sizeof(grades[0]);
    double average = average(grades);
    for (int i = 0; i < length ; i++) {
        if (average < grades[i]) {
            std::cout << grades[i] << ", ";
        }
    }
}