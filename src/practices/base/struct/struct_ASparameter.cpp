////
//// Created by chenjiahong on 2022/1/26.
////
///**
// * �ṹ����Ϊ��������
// * 1����Ϊֵ���� : ���޸�ʵ�ε�����
// * 2����Ϊ��ַ���� �� �޸�ʵ�ε�����
// * @return
// */
//
//#include <iostream>
//using namespace std;
//
//// �ṹ�嶨��
//struct student {
//    string name;
//    int age;
//    int score;
//};
//
//// ���������붨��
//// ֵ����
//void printStudent(student stu){
//    stu.age = 28;
//    cout << "�Ӻ����� ������" << stu.name << " ���䣺 " << stu.age  << " ������" << stu.score << endl;
//}
//
//// ��ַ����
//void printStudent2(student *stu ){
//    stu->age = 28;
//    cout << "�Ӻ����� ������" << stu->name << " ���䣺 " << stu->age  << " ������" << stu->score << endl;
//}
//
//int main(){
//    student stu = {"����",18,100};
//    printStudent(stu);
//    cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
//    printStudent2(&stu);
//    cout << "�������� ������" << stu.name << " ���䣺 " << stu.age  << " ������" << stu.score << endl;
//
//    return 0;
//}