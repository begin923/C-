//
// Created by JM on 2022-02-09.
//
#include <iostream>
using namespace std;

#ifndef DATA_STRUCTURE_CIRCLE_H
#define DATA_STRUCTURE_CIRCLE_H

class Circle{
private:
    int r_;
    Point center_;   // Բ�ģ� ���õ��࣬���ٳ�Ա�������Ա�����Ķ���
public:
    int getR_();
    void setR_(int r);

    Point getCenter_();

    void setCenter_(Point center);
};

#endif //DATA_STRUCTURE_CIRCLE_H
