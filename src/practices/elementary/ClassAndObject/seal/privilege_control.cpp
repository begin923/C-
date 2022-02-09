////
//// Created by JM on 2022-02-09.
//// 权限控制演示
////  公共权限  public     类内可以访问  类外可以访问
////  保护权限  protected  类内可以访问  类外不可以访问
////  私有权限  private    类内可以访问  类外不可以访问
//
//
//#include <iostream>
//using namespace std;
//
//class PersonTest{
//public:
//    string name_;
//protected:
//    string car_;
//private:
//    string password_;
//
//public:
//    void func(){
//        name_ = "张三";
//        car_ = "拖拉机";
//        password_ = "123456";
//        cout << name_ << "\t\t" << car_ << "\t" << password_ << endl;
//    }
//};
//
//int main(){
//    PersonTest pt;
//    pt.name_ = "李四";
////    pt.car_ = "挖掘机"; // 无法在类外读取非public修饰的类成员变量
//    pt.func();
//
//    return 0;
//
//}
//
