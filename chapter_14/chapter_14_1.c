// Created by Zcr on 2022/8/9.
// C结构学习
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define MAX_TITLE 41    /* 定义书名的最大长度+1 */
#define MAX_AUTHOR 31   /* 作者姓名的最大长度+1 */

struct book {   /* 结构模版,定义为book*/
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    float value;
};              /* 结构模版,定义结束*/

struct book_point { /* 定义字符串成员为指针声明 */
    char *title;
    char *author;
    float value;
};

struct book struct_param(struct book book_param); /* 函数声明 */

int fake_main(void) {
    struct book library; /* 声明library为book类型*/
    printf("请输入书名。\n");
    scanf("%s", library.title);
    printf("请输入作者。\n");
    scanf("%s", library.author);
    printf("请输入价格。\n");
    scanf("%f", &library.value); /* 因为.比&的优先级高,所以其实这里是声明为: &(library.value) */
    printf("书名: %s\t作者: %s\t价格: %f\n", libary.title, libary.author, libary.value);

    // ======= 【初始化方式】 =======
    // 1.字面量赋值初始化
    struct book library2 = {
            "C Primer Plus",
            "XXX",
            12.6
    };
    // 2.指定初始化器进行初始化
    struct book library3 = {
            .value=1.0,
            .author="xxx"
    };
    // 3.结构体赋值初始化
    struct book library4 = library;
    /* 以下分别输出的指针地址都不相等,表明是深拷贝,拷贝的是值而不是地址 */
    printf("library =%p\t library4 =%p\n", &library, &library4);
    printf("library.title =%p\t library4.title =%p\n", &library.title, &library4.title);

    // ======= 【指向结构的指针】 =======
    /* 指针数组的申明*/
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
     * 声明pBook为指向book结构的指针,并对其赋值未books[0]的地址
     * : 因为结构数组的数组名并不代表结构变量地址,所以需要加"&"
     */
    struct book *pBook = &books[0];
    pBook = pBook + 1; /* 本质上等于books[1] */
    /**
     * 对于结构体使用成员变量: book.value
     * 对于结构体指针使用成员变量: pBook->value
     */
    pBook->value = (*pBook).value = books[1].value; /* 想表达的并不是赋值,而是这几个表达式的含义相同 */
    /**
     * 以下包括struct_param()函数内的输出地址都不相同
     * : 通过函数参数进行传递的值是值传递,先进行创建新结构,然后对结构内的值进行赋值(也是深拷贝)
     * : 返回的结构的生成与上相同
     */
    printf("%p\n", &library);
    struct book return_val = struct_param(library);
    printf("%p\n", &return_val);
    // ======= 【在结构定义中使用指针声明的方式进行定义字符串】 =======
    /**
     * 先声明潜在的问题
     * : 在book_point结构定义中,并未对2个字符串指针初始化内存地址
     * : 也就是以下进行字符串成员赋值的时候,并不确定会为字符串成员分配的地址是否合法,是否与之前已经分配和之后将分配的地址发生冲突
     */
    struct book_point bp1 = {
            "Book_Point",
            "Author",
            2.0F
    };
    /**
     * 对book_point正确的声明方式
     * : 先为字符串指针成员分配地址
     * : 再为字符串变量赋值
     */
    struct book_point bp2;
    bp1.title = malloc(MAX_TITLE * (sizeof(char)));     /* 申请分配地址方式一 */
    bp1.author = calloc(MAX_AUTHOR, sizeof(char));/* 申请分配地址方式二 */

    /* 为什么使用strcpy(); bp1.title ="ABC"相对与对指针成员再次赋值了,那前面分配的地址就毫无意义,字符串字面量就是一个字符数组,数组名也即首地址 */
    strcpy(bp1.title, "Book_Point");
    strcpy(bp1.author, "Author");

    return 0;
}

struct book struct_param(struct book book_param) {
    printf("%p\n", &book_param);
}



