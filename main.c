#include "stdio.h"

// 为何在此处声明,因为程序是由上至下执行的,如果不在此处声明,那执行至main()时就不知道print_hello()表示的含义
void practice(void);    /* 1.声明函数原型 */

int COL = 3;
int COL_STATIC = 4;

int main() {
    extern int COL;
    extern int COL_STATIC;
    printf("%d\n", COL);
    printf("%d\n", COL_STATIC);

    /* 2.函数调用 */
    practice();
    return 0;
}

void practice(void) {   /* 3.函数定义 */
}

