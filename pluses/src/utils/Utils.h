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

#endif //PLUSESTOPYTHON_UTILS_H
