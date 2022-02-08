//
// Created by chenjiahong on 2022/1/20.
//

#include <iostream>
using namespace std;
#ifndef DATASTRUCTURE_SWAP_H
#define DATASTRUCTURE_SWAP_H

// 函数声明
//void swap(int a , int b);
// 函数定义
void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "交换后：\ta : " << a << "\tb:" << b << endl;
}
#endif //DATASTRUCTURE_SWAP_H
