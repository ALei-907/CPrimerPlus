//
// Created by Zcr on 2022/7/30.
//
#include "stdio.h"

#define SIZE 10

void section_10_2(void) {
    /* 声明一个二维数组 */
    /**
     * 怎么理解
     * 1.rain[3]: 声明一个名为rain的数组有5个原属
     * 2.int ...[2]: 一个内涵2个int元素的数组
     */
    int rain[3][2];

    /* 数组名其实是数组首元素的地址 */
    printf("%p", rain);
    short shortArr[SIZE];
    short *pShort;
    double doubleArr[SIZE];
    double *pDouble;
    pShort = shortArr;
    pDouble = doubleArr;

    printf("%23s %15s\n", "short", "double");
    for (int index = 0; index < SIZE; ++index) {
        /* 可以发现: 指针加1是指增加一个存储单元的大小 */
        printf("pointers + %d: %10p %10p\n", index, pShort + index, pDouble + index);
        printf("  value  + %d: %10d %10f\n", index, *(pShort + index), *(pDouble + index));

    }
    /* 指针相减: 2个指针之间的距离: 单位与数组类型的单位相同*/
    printf("指针相减:arr[3]-arr[1]=%td", ((pShort + SIZE - 1) - pShort));

    /* 可以对pDouble1++,但不可以对*pDouble1进行赋值 */
    const double *pDouble1;
    /* 可以对*pDouble2进行赋值,但不可以对pDouble2++ */
    double *const pDouble2;

    /**
     * 声明一个指向多维数组的指针
     * 表示pz指向一个内含2个int类型值的数组
     */
    int (*pz)[2] = rain;// 初始化

    /**
     * 使用指针来表示二维数组
     */
    int arr[3][4] = {
            {1, 2,  3,  4},
            {5, 6,  7,  8},
            {9, 10, 11, 12}
    };

    int (*ptArr)[4] = arr;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            /**
             *
             * *ptArr+j: 先取出arr[0]所表示的数组的首地址,然后计算arr[0]首地址+j个int单位的地址
             * *((*ptArr + j)): 最外层的*对内层数组进行解引用求值操作
             */
            printf("%d ", *((*ptArr + j)));
        }
        printf("\n");
        ptArr++;
    }

}

/* 使用const,并不是要求传入的原始数组必须为常量,而是告诉该函数,要将该数组行参当作常量 */
void un_modify_arr(const int *arr, int size) {

}

