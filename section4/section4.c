//
// Created by 雷立民 on 2022/7/26.
//
#include "stdio.h"
#include "string.h"

#define DENSITY 62.4

void section4(void) {
    /**
     * 输入你的名字:
     * -- lewis
     * lewis,你的体重是多少?
     * -- 54
     * 很好!你的体积为0.87立方英尺.
     * 你的名字有5个字母.
     * 需要40个字节来存储.
     */
    float weight, volume;
    int size, letters;
    char name[40];

    printf("输入你的名字:\n");
    // Scan读取到第一个空字符(空格,制表符,回车)就不再读取输入了
    scanf("%s", name);
    printf("%s,你的体重是多少?\n", name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;

    printf("很好!你的体积为%2.2f立方英尺.\n", volume);
    printf("你的名字有%d个字母.\n", letters);
    printf("需要%d个字节来存储.\n", size);
}
