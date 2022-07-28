#include <stdio.h>
#include "stdlib.h"

// 为何在此处声明,因为程序是由上至下执行的,如果不在此处声明,那执行至main()时就不知道print_hello()表示的含义
// 1.声明函数原型
void practice(); /* help print "hello world"*/

int main() {
    // 2.函数调用
    practice();
    return 0;
}

// 3.函数定义
void practice() {
    int ch;
    FILE *fp;
    char fname[50]; /* 一个文件名 */
    printf("请输入一个文件名.\n");
    scanf("%s", fname);
    fp = fopen(fname, "wt");
    if (fp == NULL) {
        printf("输出: 空文件! Bye.\n");
        exit(1); /* 退出成勋 */
    }
    /*getc()从fp中获取一个字符*/
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp); /* 关闭文件 */
    return;
}
