//
// Created by fukin on 08.10.2021.
//

#include "CalcGini.h"
#include "Classes.h"

double calcGini(std::vector<std::vector<Object>> &groups) {

    double gini = 0.;

    for (std::vector<Object> &group: groups) {
        unsigned long size = group.size();

        if (size == 0) {
            continue;
        }

        double score = 0.;
        for (const auto &class_val: VECTOR_OF_CLASSES) {

            double p = 0;

            for (Object object: group) {
                if (object.numOFClass_ == class_val) {
                    p += 1;
                }
            }

            p = p / (double) size;

            score += p * (1 - p);

        }

        gini += score;

    }

    return gini;
}