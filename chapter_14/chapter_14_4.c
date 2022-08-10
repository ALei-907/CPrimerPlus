// Created by Zcr on 2022/8/10.
#include "stdio.h"

void fake_main() {
    /**
     * 定义枚举常量: 枚举本质上就是int类型
     */
    enum color {
        red, orange, blue, yellow, green
    };
    /* 声明枚举变量 */
    enum color car1_color;
    enum color car2_color = red;
    enum color car3_color = orange;

    /**
     * red=0	orange=1
     * red=0	red+1 =1
     */
    printf("red=%d\torange=%d\n", red, orange);
    printf("red=%d\tred+1 =%d\n", red, red + 1);

    /* 为枚举常量赋值 */
    enum levels {
        low = 100, medium = 500, high = 1000
    };
    /**
     * low=100	medium=500
     * low=100	medium+1 =501
     */
    printf("low=%d\tmedium=%d\n", low, medium);
    printf("low=%d\tmedium+1 =%d\n", low, medium + 1);

}

