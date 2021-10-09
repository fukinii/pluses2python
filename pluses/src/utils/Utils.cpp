//
// Created by fukin on 08.10.2021.
//

#include <cassert>
#include "Utils.h"
#include "Classes.h"

double calcGini(const std::vector<Object> &group) {

    double gini = 0.;

    unsigned long size = group.size();
    for (const auto &class_val: VECTOR_OF_CLASSES) {

        double p = 0;

        for (Object object: group) {
            if (object.numOFClass_ == class_val) {
                p += 1;
            }
        }

        p = p / (double) size;

        gini += p * (1 - p);

    }

    return gini;
}


double calcQ(const std::vector<std::vector<Object>> &groups){

    double score = 0.;

    unsigned long numOfElementsInGroups = 0;

    for(const std::vector<Object>& group : groups){

        unsigned long size = group.size();
        numOfElementsInGroups += size;

        if(size == 0){
            continue;
        }

        score += calcGini(group) * (double ) size;

    }

    score = score / (double ) numOfElementsInGroups;

    return score;

}