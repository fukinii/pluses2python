//
// Created by fukin on 08.10.2021.
//

#include <gtest/gtest.h>

#include <src/utils/CalcGini.h>
#include <src/Object.h>

TEST(GINI_TEST, COMPARING){

    std::vector<std::vector<Object>> dataVector(1);

    std::vector<Object> group(4);

    group[0] = Object(VECTOR_OF_CLASSES[0]);
    group[1] = Object(VECTOR_OF_CLASSES[0]);
    group[2] = Object(VECTOR_OF_CLASSES[0]);
    group[3] = Object(VECTOR_OF_CLASSES[0]);

    dataVector[0] = group;

    double res = calcGini(dataVector);

    std::cout << res << std::endl;
}
