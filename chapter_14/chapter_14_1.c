// Created by Zcr on 2022/8/9.
// C结构学习
#include "stdio.h"
#include "stdlib.h"

#define MAX_TITLE 41    /* 定义书名的最大长度+1 */
#define MAX_AUTHOR 31   /* 作者姓名的最大长度+1 */

struct book {   /* 结构模版,定义为book*/
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    float value;
};              /* 结构模版,定义结束*/

int fake_main(void) {
    struct book libary; /* 声明library为book类型*/
    printf("请输入书名。\n");
    scanf("%s", libary.title);
    printf("请输入作者。\n");
    scanf("%s", libary.author);
    printf("请输入价格。\n");
    scanf("%f", &libary.value);
    printf("书名: %s\t作者: %s\t价格: %f\n", libary.title, libary.author, libary.value);

    return 0;
}



