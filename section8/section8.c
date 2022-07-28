//
// Created by 雷立民 on 2022/7/28.
//
#include "stdio.h"
#include "stdlib.h"

void section8(void) {
    /**
    * ^D: 表示EOF,表示文件的末尾
    */
    int ch;
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }

    FILE *fp;
    char fname[50]; /* 一个文件名 */
    printf("请输入一个文件名.\n");
    scanf("%s", fname);
    fp = fopen(fname, "r");
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
