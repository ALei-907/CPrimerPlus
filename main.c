#include <stdio.h>

#define MONTHS 12

// 为何在此处声明,因为程序是由上至下执行的,如果不在此处声明,那执行至main()时就不知道print_hello()表示的含义
// 1.声明函数原型
void practice(void); /* help print "hello world"*/

int main() {
    // 2.函数调用
    practice();
    return 0;
}

// 3.函数定义
void practice(void) {
    int staff[] = {1, [6]=7};
    int stuff[] = {1, [6]=7, 8, 9};
    printf("staff size = %zd\n", sizeof staff / sizeof staff[0]);
    printf("stuff size = %zd\n", sizeof stuff / sizeof stuff[0]);
}


