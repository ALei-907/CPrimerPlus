// Created by Zcr on 2022/8/3.
// 自动变量: (自动存储期,块作用域,无链接)。自动变量不会初始化,除非显示的初始化它,否则它的值为原先存储区的值
// 寄存器变量: (自动存储期,块作用域,无链接)。使用register来修饰
// 静态变量: (静态存储期,文件作用域|块作用域,All链接)
#include "stdio.h"

// 外部变量只能被初始化一次。一般在源文件不加extern进行初始化。其他文件如果需要使用到该变量只需要extern int COL进行声明即可
int COL = 3;
static int COL_STATIC = 4;

void block_static(void);

void chapter_12_4(void) {
    // 【自动变量】=============================================================================
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
    // 【寄存器变量】=============================================================================
    /**
     * 寄存器变量存储在寄存器中而非内存,所以无法获取寄存器变量的地址
     * 1.声明寄存器变量类似于一种申请,尽可能的用寄存器来存储变量。(有可能直接忽略)
     * 2.不能对寄存器变量使用地址运算符
     */
    register int c = 1;
    // 【静态变量】=============================================================================
    /**
     * 静态变量: 静态变量的意思是该变量在内存中的地址是不变的,值是可变的。静态变量如果未进行初始化,会初始化为默认值
     * 1.块作用域的静态变量
     */
    block_static(); // i=2,j=2
    block_static(); // i=2,j=3
    block_static(); // i=2,j=4
    /**
     * 可以不声明,进行直接使用: 此处的含义仅仅是表示该值已经被初始化过了
     */
    extern int COL;
    /**
     * 此处使用extern并不会改变其内部链接熟悉
     */
    extern int COL_STATIC;
}

void block_static(void) {
    int i = 1;
    // 对j的声明其实并不属于block_static()的一部分。静态变量和外部变量在程序被载入内存时已经执行完毕。
    // 把这条语句放入函数内是为了告诉编译器,只有block_static()才能看到该变量
    static int j = 1;
    printf("i=[%d],j=[%d]", ++i, ++j);
}

