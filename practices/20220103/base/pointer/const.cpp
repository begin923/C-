////
//// Created by chenjiahong on 2022/1/21.
////
//
//#include <iostream>
//using namespace std;
//int main() {
//    int a = 10, b = 20;
//
//    // const ����ָ�룬ָ��ָ����Ը�,ָ��ָ���ֵ���ܸ�
//    cout << "=======const ����ָ��=========" << endl;
//    const int *p1 = &a;
//    cout << "*p1 : " << *p1 << endl;
//    p1 = &b;
//    cout << "*p1 : " << *p1 << endl;
////    *p1 = a + b; // ���뱨��
//
//    // const ���γ�����ָ��ָ�����޸ģ�ָ��ָ����ڴ�ռ���ֵ�����޸�
//    cout << "========const ���γ���========" << endl;
//    int *const p2 = &a;
////    p2 = &b;  // ����ʧ��
//    cout << "*p2 : " << *p2 << "\tp2 : " << p2 << "\t&a : " << &a << endl;
//    *p2 = b;  // p2 ָ����ڴ�ռ���ֵ����������ڴ��ַ����
//    cout << "*p2 : " << *p2 << "\tp2 : " << p2 << "\t&b : " << &b << "\ta :" << a << "\t&a : " << &a << endl;
//
//    // const ���γ���Ҳ����ָ��
//    const int * const p3 = &a;
////    p3 = &b; // ����ʧ��
////    *p3 = 100; // ����ʧ��
//    cout << "*p3 :" << *p3 << endl;
//    return 0;
//}