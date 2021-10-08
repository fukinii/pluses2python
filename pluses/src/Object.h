//
// Created by fukin on 08.10.2021.
//

#ifndef PLUSESTOPYTHON_OBJECT_H
#define PLUSESTOPYTHON_OBJECT_H

class Object {
public:
    Object(int numOFClass);

    inline Object() { numOFClass_ = -1; }

    int numOFClass_;

    [[nodiscard]] int getNumOfClass() const { return numOFClass_; }
};

#endif //PLUSESTOPYTHON_OBJECT_H
