//
// Created by Zcr on 2022/7/27.
//
#include "stdio.h"

/**
 * ABCDE FG
 * BCDEF GH
 * END ....
 *
 * END ....
 */
void chapter_7(void) {
    char ch;
    // const表示不可变的常量
    const char SPACE = ' ';
    // 只读取输入缓冲区的一个字符
    // 读取至Enter结束
    while ((ch = (char) getchar()) != '\n') {
        // 空格就原样输出
        if (ch == SPACE) {
            putchar(ch);
        } else {
            // 非空格就输出ASCII+1的字符
            putchar(ch + 1);
        }

    }
    printf("END ....");
    putchar(ch);
    printf("END ....");

    ch = getchar();
    // switch (表达式): 只接受整形变量(char,short,int,long,long long)
    switch (ch) {
        // 只接受常量
        case 65:
            printf("A\n");
            break;
        case 66:
            printf("B\n");
            break;
        default:
            break;
    }
}
