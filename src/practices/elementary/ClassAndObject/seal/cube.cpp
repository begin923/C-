////
//// Created by JM on 2022-02-09.
//// 求出立方体的面积和体积
//// 分别用全局函数和成员函数判断两个立方体是否相等。
//
//#include <iostream>
//using namespace std;
//
//class Cube{
//private:
//    double length;
//    double high;
//    double wide;
//public:
//    void setLength(double length){
//        this->length = length;
//    }
//    double getLength(){
//        return length;
//    }
//    double getHigh() const {
//        return high;
//    }
//
//    void setHigh(double high) {
//        Cube::high = high;
//    }
//
//    double getWide() const {
//        return wide;
//    }
//
//    void setWide(double wide) {
//        Cube::wide = wide;
//    }
//
//
//public:
//    // 计算面积
//    double Acreage(Cube c){
//        return 2*c.getLength() + 2*c.getWide() + 2*c.getHigh();
//
//    }
//    // 计算体积
//    int Volume(Cube c){
//        return c.getLength() * c.getWide() * c.getHigh();
//    }
//    // 判断两个立方体的体积 . 只需要传入一个对象参数
//    bool isSame(Cube c){
//        if(length == c.getLength() && wide == c.getWide() && high == c.getHigh()){
//            return true;
//        }
//        return false;
//    }
//};
//
//bool isSame_g(Cube c1 , Cube c2){
//    if(c1.getLength() == c2.getLength() && c1.getWide() == c2.getWide() && c1.getHigh() == c2.getHigh()){
//        return true;
//    }
//    return false;
//}
//
//int main(){
//    Cube cube1;
//    Cube cube2;
//    cube1.setWide(1.5);
//    cube1.setLength(10);
//    cube1.setHigh(10);
//
//    cube2.setWide(1.5);
//    cube2.setLength(10);
//    cube2.setHigh(10);
//
//    cout << cube1.Acreage(cube1) << endl;
//    cout << cube2.Acreage(cube2) << endl;
//
//    cout << "cube1体积 :" << cube1.Volume(cube1) << endl;
//    cout << "cube2体积 :" << cube2.Volume(cube2) << endl;
//
//    cout << "两个立方体比较是否相同：" << cube1.isSame(cube2) << endl;
//    cout << "两个立方体比较是否相同：" << isSame_g(cube1,cube2) << endl;
//
//    return 0;
//}
