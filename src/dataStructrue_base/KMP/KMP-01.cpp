///*
// * 此程序演示了字符串的匹配模式算法，包括：
// * 1）普通的模式匹配算法，即BF算法；
// * 2）KMP算法的求next数组；
// * 3）KMP算法的求nextval数组；
// * 4）KMP算法的实现。
//*/
//
//#include <cstdio>
//#include <cstring>
//
///**
// * 字符串匹配之BF算法
// * 1、返回字符串匹配位置
// * 2、返回 -1 ，不匹配
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
//    if(j == plen){ // 匹配成功
//        return i - plen;
//    }
//    return -1;
//}
//
//// KMP 求解 next 数组
//void getNext(char pattern_str[],int next[]){
//    // 模式匹配字符串的前两位 next 的数值的固定的
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
//    int i = 2; // 字符串匹配失败从第三个位置开始
//    for (i ; i < plen ; i++) {
//        int j = 1;
//        int maxlen = 0;
//        for (j ; j < i; ++j) {
//            char p1[plen],p2[plen];
//            memset(p1,0,sizeof(p1));
//            memset(p2,0,sizeof(p2));
//            strncpy(p1,pattern_str,j); // 取前缀
//            strncpy(p2,pattern_str + i -j,j); // 取后缀
////            printf("i : %d, j ：%d , p1 : %s , p2 : %s\n",i,j,p1,p2);
//            if(strcmp(p1,p2)==0)
//                maxlen = j;
//        }
//        next[i] = maxlen;
//    }
//}
//
//// 获取 nextval 数组
//void getNextval(char patten_str[],int next[],int nextval[]){
//    int plen = strlen(patten_str);
//    if(plen == 0 || next == 0 || nextval == 0)
//        return;
//    nextval[0] = -1;
//    for (int i = 1; i < plen; i++) { // patten_str[0] , nextval[0] = -1,所以从 1 开始
//        if(patten_str[i] == patten_str[next[i]])  // 逻辑固定，至于为什么，要研究
//            nextval[i] = nextval[next[i]];
//        else
//            nextval[i] = next[i];
//    }
//}
//
//int main(){
//
//    // BF算法验证[暴力算法验证]
//    char dst_str[] = "acabababcabaabaa";
//    char pattern[] = "baabac";
//    int index = index_bf(dst_str,pattern);
//    printf("BF 算法 - index : %d\n",index);
//
//    // KMP 求解 next 数组
//    int plen = strlen(pattern);
//    int next[plen];
//    getNext(pattern,next);
//    printf("pattern : %s\n",pattern);
//    printf("next 数组：");  // -1 0 0 0 1 2
//    for (int i = 0; i < plen; ++i) {
//        printf("->%d ",next[i]);
//    }
//    printf("\n");
//
//    /**
//     * KMP nextval 数组求解
//     * 1、先计算模式串的next数组
//     * 2、根据next数组的值在模式串对应位置来判断模式串的字符是否相等，相等则赋为相同的值
//     */
//    int nextval[plen];
//    getNextval(pattern,next,nextval);
//    printf("pattern : %s\n",pattern);
//    printf("nextval 数组：");
//    for (int i = 0; i < plen; ++i) {
//        printf("->%d ",nextval[i]);
//    }
//    printf("\n");
//}