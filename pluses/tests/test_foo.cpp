//
// Created by fukin on 08.10.2021.
//

#include <src/Add.h>

#include <gtest/gtest.h>

#include <src/utils/CalcGini.h>
#include <src/Object.h>

TEST(A, B){

    Eigen::Vector3d a = foo(Eigen::Vector3d(10.,20.,30.));

    double sum = add(1., 3.);

    std::cout << a << std::endl;
    std::cout << sum << std::endl;

}