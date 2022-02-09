//
// Created by JM on 2022-02-09.
//

#pragma once

#include <iostream>
using namespace std;

#ifndef DATA_STRUCTURE_POINT_H
#define DATA_STRUCTURE_POINT_H

class Point{
private:
    int x_;
    int y_;

public:
    int getX_();
    void setX_(int x);
    int getY_();
    void setY_(int y);
};

#endif //DATA_STRUCTURE_POINT_H
