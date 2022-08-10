// Created by Zcr on 2022/8/10.
// 函数指针
#include "stdio.h"

char getAndSetChar(char *pChar, char setChar);

/* 声明了一个函数指针 */
typedef char (*PF)(char *, char);

void fake_main(void) {
    /**
     * 0x7ff7bbf1a6bc: ABC
     * return Value=A
     * 0x7ff7bbf1a6bc: aBC
     */
    char arr[4] = "ABC";
    PF pf;
    pf = getAndSetChar;             /* 为该函数指针赋值(函数地址),使用函数名即可*/
    printf("%p: %s\n", arr, arr);   /* 使用函数指针,当然了函数的参数也可以是函数指针*/
    char return_val = (*pf)(arr, 'a');
    printf("return Value=%c\n", return_val);
    printf("%p: %s\n", arr, arr);
}

char getAndSetChar(char *pChar, char setChar) {
    char return_val = *pChar;
    pChar[0] = setChar;
    return return_val;
}