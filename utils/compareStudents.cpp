//
// Created by xxtex on 10/2/2024.
//

#include "compareStudents.hpp"
#include <iostream>
    void compareStudents (int grades[]) {
        std::cout << "enter the index of the first student";
        int student1, student2;

        std::cin >> student1;
        std::cout << "enter the index of the second student";
        std::cin >> student2;
        int length = sizeof(grades) / sizeof(grades[0]);

        std::cout << "Student 1 has a grade of: " << grades[student1]<<std::endl;
        std::cout << "Student 2 has a grade of: " << grades[student2]<<std::endl;
}