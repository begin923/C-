////
//// Created by chenjiahong on 2022/1/26.
////
//
///**
// * 结构体案例
// * 案例描述：
// * 学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
// * 设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
// * 学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
// * 最终打印出老师数据以及老师所带的学生数据。
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
//            cout << "\t姓名：" << tArray[i].sArray[j].name << "\t 分数：" << tArray[i].sArray[j].score << endl;
//        }
//    }
//}
//
//int main(){
//    // 结构体成员赋值方式 1 ：
////    teacher t_arr[3] = {
////            {"01",{{"张三1",80},{"张三2",80},{"张三3",80},{"张三4",80},{"张三5",80}}},
////            {"02",{{"李四1",90},{"李四2",90},{"李四3",90},{"李四4",90},{"李四5",90}}},
////            {"03",{{"王五1",100},{"王五2",100},{"王五3",100},{"王五4",100},{"王五5",100}}}
////    };
//
////    Teacher t_arr[3];
////    string teacher_name[] = {"01","02","03"};
////    string student[3][5] = {
////            {{"张三1",80},{"张三2",80},{"张三3",80},{"张三4",80},{"张三5",80}},
////            {{"李四1",90},{"李四2",90},{"李四3",90},{"李四4",90},{"李四5",90}},
////            {{"王五1",100},{"王五2",100},{"王五3",100},{"王五4",100},{"王五5",100}}
////    };
//
//    srand((unsigned int)time(NULL));
//    Teacher tArrary[3];  // 老师数组
//    int len = sizeof(tArrary)/ sizeof(Teacher);  // 注意  sizeof(Teacher) , 填写的是结构体
//    allocateSpace(tArrary,len);
//    printTeachers(tArrary,len);
//
//    return 0;
//
//}