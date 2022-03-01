////
//// Created by JM on 2022-03-01.
//// 函数调用运算符 ()  也可以重载 ；
//// 由于重载后使用的方式非常像函数的调用，因此称为仿函数
//// 仿函数没有固定写法，非常灵活
////
//
//
//#include <iostream>
//using namespace std;
//
//class MyPrint{
//public:
//    void operator()(string text){
//        cout << text << endl;
//    }
//
//    int operator()(int v1 , int v2){
//        return v1 + v2;
//    }
//};
//
//void test01(){
//    MyPrint mp;
//    mp("仿函数测试!");
//    int add_num = mp(10,20);
//    cout << add_num << endl;
//
//}
//
//int main(){
//    test01();
//    return 0;
//}
//
