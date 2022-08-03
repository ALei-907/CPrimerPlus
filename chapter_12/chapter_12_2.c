// Created by Zcr on 2022/8/3.
#include "stdio.h"

/* 内部链接: 只有当前翻译单元(但前源文件,头文件才可使用)*/
static int all_area = 3;
/* 外部链接: 多个文件程序都可以使用 */
int this_area = 4;

void chapter_12_2(void) {
    /**
     * 无链接: 块作用域,函数作用域,函数原型作用域的变量都是无链接
     */
    int a = 3;
}


