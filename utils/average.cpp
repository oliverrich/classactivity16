
#include <iostream>
using namespace std;



    double average(int grades[]) {
        int total;
        double average;
        for (int i = 0; i < (sizeof(grades)/sizeof(grades[0])); i++) {
            total += grades[i];
        }
        average = total / (sizeof(grades)/4);
        return average;
    }

