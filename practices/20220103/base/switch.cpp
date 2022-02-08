////
//// Created by JM on 2022-01-11.
////
//
//#include <iostream>
//using namespace std;
//
///**
// * 1、表达式只能是整型或字符型
// * 2、case 里如果没有break ,  程序会一直执行下去
// * 3、switch 执行效率比if高，但不能进行区间判断
// * @return
// */
//int main(){
//    int score = 0 ;
//    cout << "Please give your score :\n" << endl;
//    cin >> score;
//    switch (score){
//        case 10:
//        case 9:
//            cout << "best\n" << endl;
//            break;
//        case 8:
//        case 7:
//            cout << "better\n" << endl;
//            break;
//        case 6:
//            cout << "good\n" << endl;
//            break;
//        default:
//            cout << "bad\n" << endl;
//            break;
//    }
//
//    return 0;
//}