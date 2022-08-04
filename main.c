#include "stdio.h"

// 为何在此处声明,因为程序是由上至下执行的,如果不在此处声明,那执行至main()时就不知道print_hello()表示的含义
int *practice(void);    /* 1.声明函数原型 */

int a = 1;

int main() {
    /* 2.函数调用 */
    int *pt = practice();
    printf("Show Main block variable a.value=[%d],a.address=[%p]\n", *pt, pt);
    return 0;
}

int *practice(void) {   /* 3.函数定义 */
    printf("external variable a.value=[%d],a.address=[%p]\n", a, &a);

    auto int a = 2;
    printf("block variable a.value=[%d],a.address=[%p]\n", a, &a);
    return &a;
}

