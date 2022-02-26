////
//// Created by chenjiahong on 2022/2/22.
//// 全局函数做友元
//
//#include <iostream>
//using namespace std;
//
//class Building{
//    //在类任意位置加以下一行代码，告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容
//    friend void goodGay(Building *building);
//private:
//    string m_bedroom;
//public:
//    string m_sittingroom;
//    Building(){
//        this->m_bedroom = "卧室";
//        this->m_sittingroom = "客厅";
//    }
//};
//
//void goodGay(Building *building){
//    cout << "m_sittingroom :" << building->m_sittingroom << endl;
//    cout << "m_bedroom :" << building->m_bedroom << endl;  // 只有成员函数或友元才能访问私有成员
//}
//
//void test01(){
//    Building building;
//    goodGay(&building);
//}
//
//int main(){
//    test01();
//    return 0;
//}
//
