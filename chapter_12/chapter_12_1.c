// Created by Zcr on 2022/8/3.
// 函数作用域: 块作用域,函数作用域,函数原型作用域,文件作用域

#include "stdio.h"
/* 文件作用域: unit的使用范围包括了整个文件 */
int unit = 3;

void chapter_12(void) {
    /**
     * 块作用域: C99放宽了对块作用域的限制
     *          i 和 a 都属于for语句块内的变量
     */
    for (int i = 0; i < 3; ++i) {
        int a = 1;
        unit = 1;
    }
    /* 函数作用域: goto标签,意味着它的作用域延伸至整个函数(函数内任意处都可跳转) */

    /* 函数原型作用域: 范围从形参定义处到原型声明结束,一般来说是没有意义的。但是对于变长数组而言,却是有意义的 */
    void test(int n, int m, int arr[n][m])
}

void test(int n, int m, int arr[n][m]) {

}


