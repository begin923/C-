////
//// Created by chenjiahong on 2022/1/26.
////
//
///**
// * 结构体案例2
// * 案例描述：
// * 设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄。
// * 通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
// * @return
// */
//
//#include <iostream>
//using namespace std;
//
//struct Hero{
//    string name;
//    int age;
//    string sex;
//} hero;
//
//void swap_struct(Hero *h_array,int len){
//    for (int i = 0; i < len; ++i) {
//        for (int j = 0; j < len - i - 1 ; ++j) {
//            if(h_array[j].age > h_array[j+1].age){
//                Hero tmp = h_array[j];
//                h_array[j] = h_array[j+1];
//                h_array[j+1] = tmp;
//            }
//        }
//    }
//
//}
//
//void print_struct(Hero *h_array,int len){
//    for (int i = 0; i < len; ++i) {
//        cout << "第" << i << "个英雄：" << h_array[i].name << "\t年龄：" << h_array[i].age << "\t性别：" << h_array[i].sex << endl;
//    }
//}
//
//int main(){
//    Hero h_array[5] = {
//            {"刘备",23,"男"},
//            {"关羽",22,"男"},
//            {"张飞",20,"男"},
//            {"赵云",21,"男"},
//            {"貂蝉",19,"女"}
//    };
//    int len = sizeof(h_array)/sizeof(hero);
//    swap_struct(h_array,len);
//    print_struct(h_array,len);
//
//    return 0;
//
//
//}