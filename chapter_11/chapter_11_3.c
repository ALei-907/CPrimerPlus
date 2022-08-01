// Created by Zcr on 2022/8/1.
#include "stdio.h"
#include "string.h"

void chapter_11_3(void) {
    char chArr[] = "1111C";
    puts(chArr);

    /**
     * 语法错误: "1111"表示的是一个地址
     *          数组的首地址是const常量是不允许改变的
     */
//    chArr="1111";
    printf("%p", "1111");
    /* 正确的拷贝方式 */
    strcpy(chArr, "1111");
    printf("%s", chArr);

    char *pt1 = "1111";
    char *pt2 = "2222";
    pt1 = pt2;
    printf("%s", pt1);

}
