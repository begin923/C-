////
//// Created by chenjiahong on 2022/1/26.
////
///**
// * �ṹ��Ƕ�ף����������ʵ������
// */
//
//#include <iostream>
//using namespace std;
//
//struct student{
//    // ��Ա�б�
//    string name;
//    int age;
//    int score;
//};
//
//struct teacher{
//    int id;
//    string name;
//    int age;
//    student stu;  // �ӽṹ��ѧ��
//};
//
//int main(){
//    teacher t1 = {10000,"����",40,{"����",18,100}};
//    cout << "��ʦְ����ţ� " << t1.id << " ,������ " << t1.name << " ,���䣺 " << t1.age << endl;
//    cout << "����ѧ��������" << t1.stu.name << ",ѧ�����䣺" << t1.stu.age << "��ѧ��������" << t1.stu.score << endl;
//    return 0;
//}