//
// Created by xxtex on 10/2/2024.
//

#include "getLowest.hpp"

#include <algorithm>


using namespace std;

    int lowest(int grades[]) {
        int length = sizeof(grades) / sizeof(grades[0]);
        sort(grades, grades+ length);
        int lowest = grades[0];
        return lowest;
    }

