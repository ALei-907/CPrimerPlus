// Created by Zcr on 2022/8/3.
// 自动变量
#include "stdio.h"

void chapter_12_4(void) {
    /**
     * first  declare x: value=[1],  address=[0x7ff7b8df86bc]
     * second declare x: value=[2],  address=[0x7ff7b8df86b8]
     * first  declare x: value=[1],  address=[0x7ff7b8df86bc]
     * second declare x: value=[101],address=[0x7ff7b8df86b4]
     * second declare x: value=[101],address=[0x7ff7b8df86b4]
     * second declare x: value=[101],address=[0x7ff7b8df86b4]
     * first  declare x: value=[5],  address=[0x7ff7b8df86bc]
     */
    int x = 1;
    printf("first declare x: value=[%d],address=[%p]\n", x, &x);
    {
        int x = 2; // 隐藏了line 6处的x
        printf("second declare x: value=[%d],address=[%p]\n", x, &x);
    }
    printf("first declare x: value=[%d],address=[%p]\n", x, &x);    // 恢复成line 6处的x。说明了既没消失也没有改变
    while (x++ <= 3) {   // line 6处的x。因为下面的x定义在循环体中,所以这里用的依然是最开始的x
        int x = 100;     // 新的x,每次到块结束时销毁,执行到该处时创建
        x++;
        printf("second declare x: value=[%d],address=[%p]\n", x, &x);    // 恢复成line 6处的x
    }
    printf("first declare x: value=[%d],address=[%p]\n", x, &x);    // 恢复成line 6处的x

}

