////
//// Created by JM on 2022-02-19.
//// ȫ�ֺ�������Ԫ�����Է�����˽�г�Ա
////
//
//#include <iostream>
//using namespace std;
//
//class Biulding{
//    //���߱����� goodGayȫ�ֺ��� �� Building��ĺ����ѣ����Է������е�˽������
//    friend void goodGay(Biulding *b);
//private:
//    string m_bed_room;
//    void func1(){
//        cout << "func1" << endl;
//    }
//public:
//    string m_sitting_room;
//    Biulding(){
//        this->m_sitting_room = "����";
//        this->m_bed_room = "����";
//    }
//
//};
//
//void goodGay(Biulding *b){
//    cout << b->m_sitting_room << endl;
////    cout << b->m_bed_room << endl;  // �޷�����˽�г�Ա
//    cout << b->m_bed_room << endl;
//    b->func1();
//
//
//}
//
//void test01(){
//    Biulding b;
//    goodGay(&b);
//}
//
//int main(){
//    test01();
//    return 0;
//}
//
