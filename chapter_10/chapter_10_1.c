//
// Created by Zcr on 2022/7/29.
//
#include "stdio.h"

#define MONTHS 12 /* 声明常量 */

/**
 * 1.数组禁止在初始化之后使用花括号的形式进行赋值
 */
void chapter_10(void) {
    /**
     * 声明一个只读数组,这样days[]初始化之后,只可以被访问,而不能被修改
     * * 如果对数组不进行初始化,那么读取对应下标的值为当前数组元素所在内存上存储的值
     * * 如果对数组进行不完全初始化,那么会进行初始化的元素会被设置为默认值,eg int=0;
     */
    const int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    /* 通过初始化元素的项数来定义数组大小也是可以的 */
    const int days2[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int index = 0; index < MONTHS; index++) {
        printf("MONTH %d has %d days\n", index + 1, days[index]);
    }

    /**
     * 回忆一下 sizeof
     * sizeof days2: 获取days所持有内存区域的总字节数
     * sizeof days2[0]: 获取一个元素所持有的字节数
     * sizeof days2/sizeof days2[0]: 数组大小
     */
    for (int index = 0; index < sizeof days2 / sizeof days2[0]; index++) {
        printf("MONTH %d has %d days\n", index + 1, days2[index]);
    }
    /**
     * daysSize= 48 bytes
     * days2Size= 48 bytes
     * days3Size= 48 bytes
     */
    const int days3[MONTHS];
    printf("daysSize= %zd bytes\n", sizeof days);
    printf("days2Size= %zd bytes\n", sizeof days2);
    printf("days3Size= %zd bytes\n", sizeof days3);
    // ======= [指定初始化器] =======
    /**
     * MONTH 1 has 31 days
     * MONTH 2 has 28 days
     * MONTH 3 has 0 days
     * MONTH 4 has 0 days
     * MONTH 5 has 0 days
     * MONTH 6 has 5 days
     * MONTH 7 has 0 days
     * MONTH 8 has 0 days
     * MONTH 9 has 8 days
     * MONTH 10 has 0 days
     * MONTH 11 has 0 days
     * MONTH 12 has 0 days
     * 指定数组下标的元素进行初始化值，其他未进行设置的为默认值
     */
    const int days4[MONTHS] = {31, 28, [5]=5, [8]=8};
    for (int index = 0; index < sizeof days4 / sizeof days4[0]; index++) {
        printf("MONTH %d has %d days\n", index + 1, days4[index]);
    }
    /**
     * staff size = 7: 下标到6,也就是7个元素
     * stuff size = 9: 下标到6之后,还有2个元素,也就是9个元素
     */
    int staff[] = {1, [6]=7};
    int stuff[] = {1, [6]=7, 8, 9};
    printf("staff size = %zd", sizeof staff / sizeof staff[0]);
    printf("stuff size = %zd", sizeof stuff / sizeof stuff[0]);

}
