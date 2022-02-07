///*
// * �˳�����ʾ���ַ�����ƥ��ģʽ�㷨��������
// * 1����ͨ��ģʽƥ���㷨����BF�㷨��
// * 2��KMP�㷨����next���飻
// * 3��KMP�㷨����nextval���飻
// * 4��KMP�㷨��ʵ�֡�
//*/
//
//#include <cstdio>
//#include <cstring>
//
///**
// * �ַ���ƥ��֮BF�㷨
// * 1�������ַ���ƥ��λ��
// * 2������ -1 ����ƥ��
// */
//int index_bf(char dst_str[],char pattern_str[]){
//    if(dst_str == 0 || pattern_str == 0)
//        return -1;
//    int i = 0,j = 0;
//    int dlen = strlen(dst_str);
//    int plen = strlen(pattern_str);
//    while (i<dlen && j < plen){
//        if(dst_str[i] == pattern_str[j]){
//            i++;
//            j++;
//        } else{
//            i = i - j + 1;
//            j = 0;
//        }
//    }
//    if(j == plen){ // ƥ��ɹ�
//        return i - plen;
//    }
//    return -1;
//}
//
//// KMP ��� next ����
//void getNext(char pattern_str[],int next[]){
//    // ģʽƥ���ַ�����ǰ��λ next ����ֵ�Ĺ̶���
//    if(strlen(pattern_str)==0)
//        return;
//    if(strlen(pattern_str)==1){
//        next[0] = -1;
//        return;
//    }
//    if(strlen(pattern_str)==2){
//        next[0] = -1;
//        next[1] = 0;
//        return;
//    }
//    next[0] = -1;
//    next[1] = 0;
//    int plen = strlen(pattern_str);
//    int i = 2; // �ַ���ƥ��ʧ�ܴӵ�����λ�ÿ�ʼ
//    for (i ; i < plen ; i++) {
//        int j = 1;
//        int maxlen = 0;
//        for (j ; j < i; ++j) {
//            char p1[plen],p2[plen];
//            memset(p1,0,sizeof(p1));
//            memset(p2,0,sizeof(p2));
//            strncpy(p1,pattern_str,j); // ȡǰ׺
//            strncpy(p2,pattern_str + i -j,j); // ȡ��׺
////            printf("i : %d, j ��%d , p1 : %s , p2 : %s\n",i,j,p1,p2);
//            if(strcmp(p1,p2)==0)
//                maxlen = j;
//        }
//        next[i] = maxlen;
//    }
//}
//
//// ��ȡ nextval ����
//void getNextval(char patten_str[],int next[],int nextval[]){
//    int plen = strlen(patten_str);
//    if(plen == 0 || next == 0 || nextval == 0)
//        return;
//    nextval[0] = -1;
//    for (int i = 1; i < plen; i++) { // patten_str[0] , nextval[0] = -1,���Դ� 1 ��ʼ
//        if(patten_str[i] == patten_str[next[i]])  // �߼��̶�������Ϊʲô��Ҫ�о�
//            nextval[i] = nextval[next[i]];
//        else
//            nextval[i] = next[i];
//    }
//}
//
//int main(){
//
//    // BF�㷨��֤[�����㷨��֤]
//    char dst_str[] = "acabababcabaabaa";
//    char pattern[] = "baabac";
//    int index = index_bf(dst_str,pattern);
//    printf("BF �㷨 - index : %d\n",index);
//
//    // KMP ��� next ����
//    int plen = strlen(pattern);
//    int next[plen];
//    getNext(pattern,next);
//    printf("pattern : %s\n",pattern);
//    printf("next ���飺");  // -1 0 0 0 1 2
//    for (int i = 0; i < plen; ++i) {
//        printf("->%d ",next[i]);
//    }
//    printf("\n");
//
//    /**
//     * KMP nextval �������
//     * 1���ȼ���ģʽ����next����
//     * 2������next�����ֵ��ģʽ����Ӧλ�����ж�ģʽ�����ַ��Ƿ���ȣ������Ϊ��ͬ��ֵ
//     */
//    int nextval[plen];
//    getNextval(pattern,next,nextval);
//    printf("pattern : %s\n",pattern);
//    printf("nextval ���飺");
//    for (int i = 0; i < plen; ++i) {
//        printf("->%d ",nextval[i]);
//    }
//    printf("\n");
//}