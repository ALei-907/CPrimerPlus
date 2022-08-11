// Created by Zcr on 2022/8/11.
#include "stdio.h"

#define TWO 2
#define FOUR TWO*TWO
#define OW "Hello\
World"
#define PX printf("X is %d.\n",x)
#define FMT "X is %d.\n"
#define SQUARE(X) X*X
/* # 运算符 */
/* 假设X=3,结果为: Here is a 3 square is 9 */
#define PSQR(X) printf("Here is a " #X " square is %d",((X)*(X)))

/* ## 黏合运算符 */
/* XNAME(1) ==> x1 */
#define XNAME(n) x ## n

/* 变参宏...和__VA_ARGS__ */
/* ...只能替换最后的参数: 即不能这样PR(x,...,y)*/
#define PR(...) printf(__VA_ARGS__)

void fake_main(void) {
    int x = TWO;
    /* 执行打印语句: 在预处理阶段将PX替换为打印语句*/
    PX;
    /* 1.FOUR=TWO*TWO 2.FOUR=2*2*/
    int y = FOUR;
    /**
     * 特别声明的是：如果将OW的声明方式修改为如下方式
     * #define OW "Hello\
     *     World"
     * 将打印 Hello World
     * 应当为 HelloWorld
     *
     */
    printf(FMT, y);
    /* #define中使用函数: SQUARE(2) ==> 2*2 */
    /* SQUARE(2+1) ==> 2+1*2+1 ==> 5 */
    printf(FMT, SQUARE(2));
}


