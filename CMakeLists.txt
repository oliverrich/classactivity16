cmake_minimum_required(VERSION 3.29)
project(classwork)

set(CMAKE_CXX_STANDARD 20)

add_executable(classwork main.cpp
        utils/average.cpp
        utils/getHighest.cpp
        utils/getHighest.hpp
        utils/getLowest.cpp
        utils/getLowest.hpp
        utils/getAboveAverage.cpp
        utils/getAboveAverage.hpp
        utils/average.hpp
        utils/compareStudents.cpp
        utils/compareStudents.hpp
)
