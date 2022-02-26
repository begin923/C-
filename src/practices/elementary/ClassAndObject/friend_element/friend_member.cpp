////
//// Created by chenjiahong on 2022/2/22.
//// 成员函数做友元
////
//
///**
// * 使用注意事项：
// * 1、friend void GoodGay::vist01();   //  注意项1：要在 Building 类中声明为友元 , GoodGay 类要在 Building 类前先定义，才能使用
// * 2、this->building = new Building;  // 注意项2：要在 GoodGay 构造中new Building 类对象，要定义 Building 类后（代码之后），才能使用new
// */
//
//#include <iostream>
//using namespace std;
//
//class Building;  // 类声明
//class GoodGay{
//private:
//    Building *building;
//public:
//    GoodGay();
//    // 成员函数
//    void vist01();
//    void vist02();
//};
//
//class Building {
//    friend void GoodGay::vist01();   //  注意项1：GoodGay 类要先定义，才能使用
//private:
//    string m_bed_room;
//public:
//    string m_sitting_room;
//    Building();
//};
//
//Building::Building(){
//    this->m_sitting_room = "客厅";
//    this->m_bed_room = "卧室";
//}
//
//GoodGay::GoodGay(){
//    this->building = new Building;  // 注意项2：要再其他类构造中new其他类对象，要定义类后（代码之后），才能使用new
//}
//
//void GoodGay::vist01(){
//    cout << "m_sitting_room : " << building->m_sitting_room << endl;
//    cout << "m_bed_room : " << building->m_bed_room << endl;  // 访问其他类的私有成员
//}
//
//void GoodGay::vist02(){
//    cout << "m_sitting_room : " << building->m_sitting_room << endl;
////        cout << "m_bed_room : " << building->m_bed_room << endl;  // 无法访问其他类的私有成员
//}
//
//void test01(){
//    GoodGay gg;
//    gg.vist01();
//    gg.vist02();
//}
//int main(){
//    test01();
//    return 0;
//}