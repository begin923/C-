////
//// Created by chenjiahong on 2022/1/26.
////
//
///**
// * �ṹ�尸��2
// * ����������
// * ���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;�����ṹ�����飬�����д��5��Ӣ�ۡ�
// * ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����
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
//        cout << "��" << i << "��Ӣ�ۣ�" << h_array[i].name << "\t���䣺" << h_array[i].age << "\t�Ա�" << h_array[i].sex << endl;
//    }
//}
//
//int main(){
//    Hero h_array[5] = {
//            {"����",23,"��"},
//            {"����",22,"��"},
//            {"�ŷ�",20,"��"},
//            {"����",21,"��"},
//            {"����",19,"Ů"}
//    };
//    int len = sizeof(h_array)/sizeof(hero);
//    swap_struct(h_array,len);
//    print_struct(h_array,len);
//
//    return 0;
//
//
//}