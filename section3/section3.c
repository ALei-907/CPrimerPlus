//
// Created by 雷立民 on 2022/7/25.
//
#include <stdio.h>

void section3(void) {
    int ten = 10, two = 2;
    /**
     * result: 10 is ten,2 is two,16 is constant
     * 为什么输出16? 因为 020表示为8进制的20
     */
    printf("%d is ten,%d is two,%d is constant", ten, two, 020);

    /**
     * result: 10进制: 10,8进制: 12,16进制: a
     * 输出为指定进制
     */
    printf("10进制: %d,8进制: %o,16进制: %x", 10, 10, 10);

    /**
     * result: 10进制: 10,8进制: 012,16进制: 0xa,16进制: 0XA
     * 显示进制前缀
     */
    printf("10进制: %d,8进制: %#o,16进制: %#x,16进制: %#X", 10, 10, 10, 10);

}
