//
// Created by fukin on 08.10.2021.
//

#ifndef PLUSESTOPYTHON_UTILS_H
#define PLUSESTOPYTHON_UTILS_H

#include <vector>
#include "../Object.h"
#include "Classes.h"

double calcGini(const std::vector<Object> &groups);

double calcQ(const std::vector<std::vector<Object>> &groups);

std::vector<std::vector<Object>> splitData(std::vector<Object> dataSet, double value, int index);

#endif //PLUSESTOPYTHON_UTILS_H
