////
//// Created by chenjiahong on 2022/1/26.
////
//
///**
// * �ṹ�尸��
// * ����������
// * ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
// * ���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
// * ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
// * ���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�
// */
//
//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//
//struct Student{
//    string name;
//    int score;
//};
//
//struct Teacher{
//    string name;
//    Student sArray[5];
//};
//
//void allocateSpace(Teacher tArray[],int len){
//    string tName = "T";
//    string sName = "S";
//    string nameSeed = "ABCDE";
//    for (int i = 0; i < len; ++i) {
//        tArray[i].name = tName + nameSeed[i];
//        for (int j = 0; j < 5; ++j) {
//            tArray[i].sArray[j].name = sName + nameSeed[j];
//            tArray[i].sArray[j].score = rand() % 61 + 40;
//        }
//    }
//}
//
//void printTeachers(Teacher tArray[],int len){
//    for (int i = 0; i < len; ++i) {
//        cout << tArray[i].name << endl;
//        for (int j = 0; j < 5; ++j) {
//            cout << "\t������" << tArray[i].sArray[j].name << "\t ������" << tArray[i].sArray[j].score << endl;
//        }
//    }
//}
//
//int main(){
//    // �ṹ���Ա��ֵ��ʽ 1 ��
////    teacher t_arr[3] = {
////            {"01",{{"����1",80},{"����2",80},{"����3",80},{"����4",80},{"����5",80}}},
////            {"02",{{"����1",90},{"����2",90},{"����3",90},{"����4",90},{"����5",90}}},
////            {"03",{{"����1",100},{"����2",100},{"����3",100},{"����4",100},{"����5",100}}}
////    };
//
////    Teacher t_arr[3];
////    string teacher_name[] = {"01","02","03"};
////    string student[3][5] = {
////            {{"����1",80},{"����2",80},{"����3",80},{"����4",80},{"����5",80}},
////            {{"����1",90},{"����2",90},{"����3",90},{"����4",90},{"����5",90}},
////            {{"����1",100},{"����2",100},{"����3",100},{"����4",100},{"����5",100}}
////    };
//
//    srand((unsigned int)time(NULL));
//    Teacher tArrary[3];  // ��ʦ����
//    int len = sizeof(tArrary)/ sizeof(Teacher);  // ע��  sizeof(Teacher) , ��д���ǽṹ��
//    allocateSpace(tArrary,len);
//    printTeachers(tArrary,len);
//
//    return 0;
//
//}