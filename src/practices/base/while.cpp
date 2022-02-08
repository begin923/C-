////
//// Created by JM on 2022-01-11.
////
//
//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//#include <windef.h>
//
//using namespace std;
//
//#define random(a,b) (rand()%(b-a)+a)
//
///**
// * 1、while
// *
// * @return
// */
//int main(){
//    int num = 0;
////    while (num < 10){
////        cout << "num = " << num << endl;
////        num ++;
////    }
//
//    /**
//     * 练习：系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏
//     */
//    srand((int)time(0));   // 产生随机种子， 0 也可以换成 NULL
//    int random_num = random(1,100);   // 产生随机数
//    int in = 0 ;
//    cout << "random_num ;" << random_num << endl;
//    while (TRUE){
//        cin >> in ;
//        if(in == random_num){
//            cout << "Congratulations on your guess" << endl;
//            break;
//        }
//        else if(in > random_num){
//            cout << "biger" << endl;
//        }
//        else if (in < random_num){
//            cout << "small" << endl;
//        }
//    }
//
//    return 0;
//}