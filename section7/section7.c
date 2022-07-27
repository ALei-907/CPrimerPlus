//
// Created by 雷立民 on 2022/7/27.
//
#include "stdio.h"

/**
 * ABCDE FG
 * BCDEF GH
 * END ....
 *
 * END ....
 */
void section7(void) {
    char ch;
    // const表示不可变的常量
    const char SPACE = ' ';
    // 只读取输入缓冲区的一个字符
    ch = getchar();
    // 读取至Enter结束
    while (ch != '\n') {
        // 空格就原样输出
        if (ch == SPACE) {
            putchar(ch);
        } else {
            // 非空格就输出ASCII+1的字符
            putchar(ch + 1);
        }
        ch = getchar();
    }
    printf("END ....");
    putchar(ch);
    printf("END ....");
}
