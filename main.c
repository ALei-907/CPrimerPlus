#include <stdio.h>

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
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    printf("%d,%d",a,b);

}
