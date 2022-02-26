////
//// Created by JM on 2022-02-19.
//// 全局函数做友元，可以访问类私有成员
////
//
//#include <iostream>
//using namespace std;
//
//class Biulding{
//    //告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容
//    friend void goodGay(Biulding *b);
//private:
//    string m_bed_room;
//    void func1(){
//        cout << "func1" << endl;
//    }
//public:
//    string m_sitting_room;
//    Biulding(){
//        this->m_sitting_room = "客厅";
//        this->m_bed_room = "卧室";
//    }
//
//};
//
//void goodGay(Biulding *b){
//    cout << b->m_sitting_room << endl;
////    cout << b->m_bed_room << endl;  // 无法访问私有成员
//    cout << b->m_bed_room << endl;
//    b->func1();
//
//
//}
//
//void test01(){
//    Biulding b;
//    goodGay(&b);
//}
//
//int main(){
//    test01();
//    return 0;
//}
//
