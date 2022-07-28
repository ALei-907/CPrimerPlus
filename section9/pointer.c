//
// Created by 雷立民 on 2022/7/29.
#include "stdio.h"

void incr_a(int *pInt); // 指针类型的传递

void section9(void) {
    int a = 1;
    /**
     * 获取变量A的地址存入指针变量pA
     * "*" 表明声明的变量是一个指针.
     * int *pA = &a; 声明的意思是pA是一个指针,*pA是int类型的
     */
    int *pA = &a;
    /* 通过解引用操作符来获取指针变量pA的所存储的值 */
    int b = *pA;

    /**
     * %p是指针类型的转换格式: 虽然它表现为16进制的整数,但它仍然是一个不同于整型的类型
     * a=1,b=1
     * *pA=0x7ff7b43176bc
     */
    printf("a=%d,b=%d\n *pA=%p", a, b, pA);


    /**
     * 演示如何进行指针传递
     * result: incr_a after: a= 2
     */
    incr_a(pA);
    printf("incr_a after: a= %d", a);

}

void incr_a(int *pInt) {
    (*pInt)++;
}

