//
// Created by Zcr on 2022/7/27.
//
#include "stdio.h"

void section6(void) {
    /**
     * input: 1 2 [Enter]
     * output: 1,2
     * 解释: scanf会缓存输入序列
     */
    int a1, b1;
    scanf("%d", &a1);
    scanf("%d", &b1);
    printf("%d,%d", a1, b1);


    long l1;
    while (scanf("%ld", &l1) == 1) {
        printf("%ld\n", l1);
        printf("plz input a Long Number (q is quit):\n");
    }


    /**
     * result:
     * 2
     * 1
     * decipher:
     * 1.逗号表达式会从左至又进行表达式求值,最后将最右侧的值作为 "赋值语句左侧" 的值
     * 2.    a = 1, 2; => a=1; 2;
     */
    int a;
    a = (1, 2);
    printf("%d\n", a);
    a = 1, 2;
    printf("%d\n", a);

    /**
     * c += 2.0f / 6.0f = 1.333333
     * c = (c + 2.0f) / 6.0f; = 0.500000
     * c = c + (2.0f / 6.0f); =1.333333
     * 结论就是: /的优先级比+=更高
     */
    float c = 1.0f;
    c = c + (2.0f / 6.0f);
    printf("%f", c);

    while (scanf("%ld", &l1) == 1) {
        printf("%ld\n", l1);
        printf("plz input a Long Number (q is quit):\n");
    }

    /**
     * do wile循环
     */
    do {
        printf("%ld\n", l1);
        printf("plz input a Long Number (q is quit):\n");
    } while (scanf("%ld", &l1) == 1);


}
