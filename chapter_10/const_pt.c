//
// Created by Zcr on 2022/8/1.
//
#include "stdio.h"

void const_pt(void){
    char c1 = 'A';
    char c2 = 'B';
    /**
     * 此处const修饰的是"*ptChar",表示:*ptChar的值不可被修改,但ptChar可以修改,比如++ptChar;
     */
    const char *ptChar = &c1;
    printf("%c\n", *ptChar);

    /**
     * 此处const修饰的是"ptChar1": 表示ptChar1不能被修改也就是不能ptChar1++,但是*ptChar的值可以被修改
     */
    char *const ptChar1 = &c2;
    *ptChar1='C';
    printf("%c", *ptChar);
}
