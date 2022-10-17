#include <stdio.h>

/* STRING: 表示为一个字符指针*/
typedef char *STRING;

/* 定义了一个函数指针: 入参为2个int变量,返回char的函数指针*/
typedef char (*pFun)(int a, int b);

/* COMPLEX表示complex结构 */
typedef struct complex {
    float real;
    float imag;
} COMPLEX;

/* COMPLEX_SIMPLE甚至可以省略结构名称 */
typedef struct {
    float real;
    float imag;
} COMPLEX_SIMPLE;

/* 同时定义结构与结构指针 */
typedef struct {
    int a;
} TEMP_S, *TEMP_SP;

int main(void) {
    TEMP_S tempS = {
            1
    };
    printf("tempS.a=[%d]\n", tempS.a);
    TEMP_SP tempSp = &tempS;
    tempSp->a = 2;
    printf("After Change,tempS.a=[%d]\n", tempS.a);



    STRING str = "ABC";
    printf("str=[%s]\n", str);
}


