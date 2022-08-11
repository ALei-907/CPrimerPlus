// Created by Zcr on 2022/8/10.

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

void fake_main(void) {
    STRING str = "ABC";
    COMPLEX complex1 = {
            1.0F,
            2.0F
    };
}


