//
// Created by JM on 2022-03-13.
//


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
using namespace std;

#include "./check/check_entity.h"
#include "head/WorkerManager.h"


int main(){
    WorkerManager workManager;
    while (true){
        workManager.ShowMenu();
        int choice = 0;
        cin >> choice;
        workManager.SelectMenu(choice);
    }

    return 0;
}