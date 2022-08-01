// Created by Zcr on 2022/8/1.
#include "stdio.h"

/**
 * gcc demo2.c -o demo2.o
 * 在类Unix环境中指向main函数,可以通过如下方式获取到指向参数
 * >>>>>>> 以下为输出 >>>>>>>
 * 有5个参数
 * 0: ./demo2.o
 * 1: Hello
 * 2: is
 * 3: me
 * 4: test
 */
int fake_main(int arg_num, char *argv[]) {
    printf("有%d个参数\n", arg_num);
    for (int i = 0; i < arg_num; i++) {
        printf("%d: %s\n", i, argv[i]);
    }
    return 0;
}
