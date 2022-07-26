#include <stdio.h>
#include "string.h"
#include "limits.h"

#define DENSITY 62.4
#define TEST "Hello Lewis Lei "

// 为何在此处声明,因为程序是由上至下执行的,如果不在此处声明,那执行至main()时就不知道print_hello()表示的含义
// 1.声明函数原型
void practice(); /* help print "hello world"*/

int main() {
    // 2.函数调用
    practice();
    return 0;
}

// 3.函数定义
void practice() {

    int i;
    char c;
    scanf("%d %c", &i, &c);
    printf("\n");
    printf("i = %d\n", i);

    printf("c = \"%c\"\n", c);

}
