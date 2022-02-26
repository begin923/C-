////
//// Created by chenjiahong on 2022/2/22.
//// 类做友元
//
///**
// * A类内成员函数、对象要访问B类的私有成员，要在B类中声明A类是B类的友元类
// * 语法：friend class A(类名)
// */
//
//
//#include <iostream>
//using namespace std;
//
//class Building{
//    friend class GoodGay;
//private:
//    string m_bedroom;//卧室
//public:
//    string m_sittingroom; //客厅
//    Building();  // 构造函数声明
//};
//
//// 类外定义构造函数和成员函数
//// Building:: 限定作用域
//Building::Building(){
//    this->m_bedroom = "卧室";
//    this->m_sittingroom = "客厅";
//}
//
//class GoodGay{
//private:
//    Building *building;
//public:
//    GoodGay(); // 构造函数声明
//    void vist(); // 成员函数声明
//};
//
//// 类外定义构造函数和成员函数
//// GoodGay:: 限定作用域
//GoodGay::GoodGay() {
//    this->building = new Building();
//}
//
//void GoodGay::vist() {
//    cout << "好基友正在访问 - " << building->m_sittingroom << endl;
//    cout << "好基友正在访问 - " << building->m_bedroom << endl;  // 外部类正常情况下不能访问其他类下私有成员；友元类除外
//}
//
//void test01(){
//    GoodGay gg;
//    gg.vist();
//}
//
//int main(){
//    test01();
//    return 0;
//}