////
//// Created by JM on 2022-02-05.
////
//
//#include <iostream>
//using namespace std;
//
///**
// * �������أ���������ͬ���ββ�ͬ����ߺ����ĸ�����
// * 1������������
// *      1��ͬһ����������
// *      2����������ͬ
// *      3�������������Ͳ�ͬ�����������ͬ�����˳��ͬ
// * 2��ע�����
// *      1�������ķ���ֵ��������Ϊ�������ص�����
// *      2��������Ϊ�������������(���� const ����)
// *      3��������������������Ĭ��ֵ{Ҫ�������}
// * @return
// */
//
//// �������ض���ͳһ��������
//void func(){
//   cout << "func �ĵ��ã�" << endl;
//}
//void func(int a){
//    cout << "func (int a) �ĵ��ã�" << endl;
//}
//void func(double a)
//{
//    cout << "func (double a)�ĵ��ã�" << endl;
//}
//void func(int a ,double b)
//{
//    cout << "func (int a ,double b) �ĵ��ã�" << endl;
//}
//void func(double a ,int b)
//{
//    cout << "func (double a ,int b)�ĵ��ã�" << endl;
//}
////��������ֵ��������Ϊ������������
////int func(double a, int b)
////{
////	cout << "func (double a ,int b)�ĵ��ã�" << endl;
////    return 0;
////}
//
//void func1(int &a){
//    cout << "func(int &a) ����" << endl;
//}
//void func1(const int &a){
//    cout << "func(const int &a) ����" << endl;
//}
//
//// �в���Ĭ��ֵ�ĺ������أ�Ҫ��������
//void func2(int a , int b = 20){
//    cout << "func2(int a , int b = 20) ����" << endl;
//}
//void func2(int a ){
//    cout << "func2(int a) ����" << endl;
//}
//
//int main(){
//    // ������������
////    func();
////    func(10);
////    func(3.14);
////    func(10,3.14);
////    func(3.14 , 10);
//
//    // �����β������û���Ĭ��ֵ
//    int a = 10;
//    func1(a);
//    func1(10);
//
//    func2(10,30);
//
//
//    return 0;
//}