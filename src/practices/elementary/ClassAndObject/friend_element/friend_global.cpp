////
//// Created by chenjiahong on 2022/2/22.
//// ȫ�ֺ�������Ԫ
//
//#include <iostream>
//using namespace std;
//
//class Building{
//    //��������λ�ü�����һ�д��룬���߱����� goodGayȫ�ֺ��� �� Building��ĺ����ѣ����Է������е�˽������
//    friend void goodGay(Building *building);
//private:
//    string m_bedroom;
//public:
//    string m_sittingroom;
//    Building(){
//        this->m_bedroom = "����";
//        this->m_sittingroom = "����";
//    }
//};
//
//void goodGay(Building *building){
//    cout << "m_sittingroom :" << building->m_sittingroom << endl;
//    cout << "m_bedroom :" << building->m_bedroom << endl;  // ֻ�г�Ա��������Ԫ���ܷ���˽�г�Ա
//}
//
//void test01(){
//    Building building;
//    goodGay(&building);
//}
//
//int main(){
//    test01();
//    return 0;
//}
//
