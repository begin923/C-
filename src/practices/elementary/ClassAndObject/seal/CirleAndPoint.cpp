////
//// Created by JM on 2022-02-09.
//// ���һ��Բ���ࣨCircle������һ�����ࣨPoint����������Բ�Ĺ�ϵ��
//// ����Բ�ڡ��ϡ���
//
//#include "../../../../../head/point.h"
//#include "../../../../../head/circle.h"
//
//int Point::getX_() {
//    return x_;
//}
//
//void Point::setX_(int x) {
//    Point::x_ = x;
//}
//
//int Point::getY_() {
//    return y_;
//}
//
//void Point::setY_(int y) {
//    Point::y_ = y;
//}
//
//void Circle::setR_(int r) {
//    Circle::r_ = r;
//}
//
//Point Circle::getCenter_() {
//    return center_;
//}
//
//void Circle::setCenter_(Point center) {
//    center_ = center;
//}
//
//int Circle::getR_() {
//    return r_;
//}
//
//
//// ������ֵ��ƽ��
//int Square(int num){
//    return  num * num;
//}
//
//// �жϵ���Բ�Ĺ�ϵ
//void isInCircle(Point p , Circle c){
//    int distance = Square(p.getX_() - c.getCenter_().getX_()) + Square(p.getY_() - c.getCenter_().getY_());
//    int rdistance = Square(c.getR_());
////    cout << distance << endl;
////    cout << rdistance << endl;
//    if(distance == rdistance){
//        cout << "����Բ��" << endl;
//    }
//    else if(distance >= rdistance){
//        cout << "����Բ��" << endl;
//    } else{
//        cout << "����Բ��" << endl;
//    }
//}
//
//int main(){
//    // ������
//    Point p;
//    p.setX_(30);
//    p.setY_(20);
//
//    // c����Բ
//    Circle c;
//    c.setR_(15);
//    Point center;
//    center.setX_(15);
//    center.setY_(20);
//    c.setCenter_(center);
//
//    isInCircle(p,c);
//
//    return 0;
//
//}