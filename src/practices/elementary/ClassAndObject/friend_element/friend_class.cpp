////
//// Created by chenjiahong on 2022/2/22.
//// ������Ԫ
//
///**
// * A���ڳ�Ա����������Ҫ����B���˽�г�Ա��Ҫ��B��������A����B�����Ԫ��
// * �﷨��friend class A(����)
// */
//
//
//#include <iostream>
//using namespace std;
//
//class Building{
//    friend class GoodGay;
//private:
//    string m_bedroom;//����
//public:
//    string m_sittingroom; //����
//    Building();  // ���캯������
//};
//
//// ���ⶨ�幹�캯���ͳ�Ա����
//// Building:: �޶�������
//Building::Building(){
//    this->m_bedroom = "����";
//    this->m_sittingroom = "����";
//}
//
//class GoodGay{
//private:
//    Building *building;
//public:
//    GoodGay(); // ���캯������
//    void vist(); // ��Ա��������
//};
//
//// ���ⶨ�幹�캯���ͳ�Ա����
//// GoodGay:: �޶�������
//GoodGay::GoodGay() {
//    this->building = new Building();
//}
//
//void GoodGay::vist() {
//    cout << "�û������ڷ��� - " << building->m_sittingroom << endl;
//    cout << "�û������ڷ��� - " << building->m_bedroom << endl;  // �ⲿ����������²��ܷ�����������˽�г�Ա����Ԫ�����
//}
//
//void test01(){
//    GoodGay gg;
//    gg.vist();
//}
//
//int main(){
//    test01();
//    return 0;
//}