////
//// Created by chenjiahong on 2022/2/22.
//// ��Ա��������Ԫ
////
//
///**
// * ʹ��ע�����
// * 1��friend void GoodGay::vist01();   //  ע����1��Ҫ�� Building ��������Ϊ��Ԫ , GoodGay ��Ҫ�� Building ��ǰ�ȶ��壬����ʹ��
// * 2��this->building = new Building;  // ע����2��Ҫ�� GoodGay ������new Building �����Ҫ���� Building ��󣨴���֮�󣩣�����ʹ��new
// */
//
//#include <iostream>
//using namespace std;
//
//class Building;  // ������
//class GoodGay{
//private:
//    Building *building;
//public:
//    GoodGay();
//    // ��Ա����
//    void vist01();
//    void vist02();
//};
//
//class Building {
//    friend void GoodGay::vist01();   //  ע����1��GoodGay ��Ҫ�ȶ��壬����ʹ��
//private:
//    string m_bed_room;
//public:
//    string m_sitting_room;
//    Building();
//};
//
//Building::Building(){
//    this->m_sitting_room = "����";
//    this->m_bed_room = "����";
//}
//
//GoodGay::GoodGay(){
//    this->building = new Building;  // ע����2��Ҫ�������๹����new���������Ҫ������󣨴���֮�󣩣�����ʹ��new
//}
//
//void GoodGay::vist01(){
//    cout << "m_sitting_room : " << building->m_sitting_room << endl;
//    cout << "m_bed_room : " << building->m_bed_room << endl;  // �����������˽�г�Ա
//}
//
//void GoodGay::vist02(){
//    cout << "m_sitting_room : " << building->m_sitting_room << endl;
////        cout << "m_bed_room : " << building->m_bed_room << endl;  // �޷������������˽�г�Ա
//}
//
//void test01(){
//    GoodGay gg;
//    gg.vist01();
//    gg.vist02();
//}
//int main(){
//    test01();
//    return 0;
//}