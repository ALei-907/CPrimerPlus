// Created by Zcr on 2022/8/10.

/* STRING: 表示为一个字符指针*/
typedef char *STRING;

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


