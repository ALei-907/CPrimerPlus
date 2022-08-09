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
    struct book library; /* 声明library为book类型*/
    printf("请输入书名。\n");
    scanf("%s", library.title);
    printf("请输入作者。\n");
    scanf("%s", library.author);
    printf("请输入价格。\n");
    scanf("%f", &library.value); /* 因为.比&的优先级高,所以其实这里是声明为: &(library.value) */
    printf("书名: %s\t作者: %s\t价格: %f\n", libary.title, libary.author, libary.value);

    // 一种初始化方式
    struct book library2 = {
            "C Primer Plus",
            "XXX",
            12.6
    };
    // 使用指定初始化器进行初始化
    struct book library3 = {
            .value=1.0,
            .author="xxx"
    };
    // ======= 指向结构的指针 =======
    struct book books[2] = {
            {
                    "book1",
                    "author1",
                    1.0
            },
            {
                    "book2",
                    "author2",
                    2.0
            }
    };
    /**
     * pBook未指向book结构的指针,并对其赋值未books[0]的地址
     * 因为结构数组的数组名并不代表结构变量地址,所以需要加"&"
     */
    struct book *pBook = &books[0];
    pBook = pBook + 1; /* 本质上等于books[1]*/
    pBook->value = (*pBook).value = books[1].value; /* 想表达的并不是赋值,而是这几个表达式的含义相同 */
    return 0;
}



