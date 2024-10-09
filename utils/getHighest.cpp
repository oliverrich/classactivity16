//
// Created by xxtex on 10/2/2024.
//

#include "getHighest.hpp"

#include <algorithm>


using namespace std;
    int highest(int grades[]) {
        int length = sizeof(grades) / sizeof(grades[0]);
        sort(grades, grades+ length);
        int highest = grades[length];
        return highest;
    }

