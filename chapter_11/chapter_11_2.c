// Created by Zcr on 2022/8/1.
//  arrchar.c -- array of pointers, array of strings
// 原书 配套代码
#include <stdio.h>

#define STR_LEN 40
#define LIM 5

int arr_char(void) {
    /**
     * 1.const char *my_talents[LIM]: 怎么理解
     *   my_talents是一个内含五个char指针的数组
     *
     * 2.const char (*my_talents)[LIM]: 怎么理解
     *   my_talents是指向一个内含五个char的数组
     */
    const char *my_talents[LIM] = {
            "Adding numbers swiftly",
            "Multiplying accurately", "Stashing data",
            "Following instructions to the letter",
            "Understanding the C language"
    };
    char your_talents[LIM][STR_LEN] = {
            "Walking in a straight line",
            "Sleeping", "Watching television",
            "Mailing letters", "Reading email"
    };
    char (*ptr)[40] = your_talents;
    /* 输出第一个字符串: 等价于puts(ptr) = puts(your_talents[0]) */
    //    puts(*ptr);
    //    printf("%c\n",**ptr);
    int i;

    puts("Let's compare talents.");
    printf("%-36s  %-25s\n", "My Talents", "Your Talents");
    for (i = 0; i < LIM; i++)
        printf("%-36s  %-25s\n", my_talents[i], your_talents[i]);
    printf("\nsizeof my_talents: %zd, sizeof your_talents: %zd\n",
           sizeof(my_talents), sizeof(your_talents));

    return 0;
}


