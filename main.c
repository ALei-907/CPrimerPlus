#include <stdio.h>

#define SIZE 10

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
    short shortArr[SIZE] = {};
    short *pShort;
    double doubleArr[SIZE] = {};
    double *pDouble;
    pShort = shortArr;
    pDouble = doubleArr;
    printf("%23s %15s\n", "short", "double");
    for (int index = 0; index < SIZE; ++index) {
        printf("pointers + %d: %10p %10p\n", index, pShort + index, pDouble + index);
        printf("  value  + %d: %10d %10f\n", index, *(pShort + index), *(pDouble + index));

    }

}


