// Created by Zcr on 2022/8/6.
#include <stdio.h>

/* 声明外部函数 */
extern void srand1(unsigned int seed);

/* 声明外部函数 */
extern int rand1(void);

int fake_main(void) {
    int count;
    unsigned seed;

    printf("请输入一个随机种子!\n");
    while (scanf("%u", &seed) == 1) {
        srand1(seed); /* 重置种子 */
        for (count = 0; count < 5; ++count) {
            printf("%d\n", rand1());
        }
        printf("请输入一个随机种子,或者输入其他非数字字符退出!\n");
    }
    printf("结束!\n");
    return 0;
}
