//
// Created by chenjiahong on 2022/1/20.
//

#include <iostream>
using namespace std;
#ifndef DATASTRUCTURE_SWAP_H
#define DATASTRUCTURE_SWAP_H

// ��������
//void swap(int a , int b);
// ��������
void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "������\ta : " << a << "\tb:" << b << endl;
}
#endif //DATASTRUCTURE_SWAP_H
