////
//// Created by chenjiahong on 2022/1/26.
////
//
///**
// * �ṹ���� const ��ʹ�ó���
// * @return
// */
//
//#include <iostream>
//using namespace std;
//
////ѧ���ṹ�嶨��
//struct student
//{
//    //��Ա�б�
//    string name;  //����
//    int age;      //����
//    int score;    //����
//};
//
//// const ʹ�ó���
//void printStudent(const student *stu){  // ��const��ֹ�������е������
////    stu->age = 100; // ����ʧ�� �� const ���εı��������޸�
//    cout << "������" << stu->name << " ���䣺" << stu->age << " ������" << stu->score << endl;
//}
//
//int main(){
//    student stu = {"����",18,100};
//    printStudent(&stu);
//}