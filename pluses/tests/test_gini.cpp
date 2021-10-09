//
// Created by fukin on 08.10.2021.
//

#include <gtest/gtest.h>

#include <src/utils/Utils.h>
#include <src/Object.h>

TEST(GINI_TEST, COMPARING){

    std::vector<Object> group1(4);
    group1[0] = Object(VECTOR_OF_CLASSES[0]);
    group1[1] = Object(VECTOR_OF_CLASSES[0]);
    group1[2] = Object(VECTOR_OF_CLASSES[0]);
    group1[3] = Object(VECTOR_OF_CLASSES[0]);

    double res = calcGini(group1);

    std::cout << res << std::endl;
}

TEST(CALC_Q_TEST, GINI){

    std::vector<std::vector<Object>> dataVector(2);

    std::vector<Object> group1(5);
    group1[0] = Object(VECTOR_OF_CLASSES[1]);
    group1[1] = Object(VECTOR_OF_CLASSES[0]);
    group1[2] = Object(VECTOR_OF_CLASSES[0]);
    group1[3] = Object(VECTOR_OF_CLASSES[0]);
    group1[4] = Object(VECTOR_OF_CLASSES[0]);
    dataVector[0] = group1;

    std::vector<Object> group2(5);
    group2[0] = Object(VECTOR_OF_CLASSES[1]);
    group2[1] = Object(VECTOR_OF_CLASSES[1]);
    group2[2] = Object(VECTOR_OF_CLASSES[1]);
    group2[3] = Object(VECTOR_OF_CLASSES[1]);
    group2[4] = Object(VECTOR_OF_CLASSES[1]);

    dataVector[1] = group2;

    double res = calcQ(dataVector);

    std::cout << res << std::endl;

}
