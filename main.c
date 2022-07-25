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
void practice(){
    printf("10进制: %d,8进制: %#o,16进制: %#x,16进制: %#X\n", 10, 10, 10, 10);
    char c1='A';
    printf("%c\n",c1);
    printf("%d\n",c1);
    printf("short has a size of %lu bytes \n",sizeof(short));
    printf("int has a size of %lu bytes \n",sizeof(int));
    printf("long has a size of %lu bytes \n",sizeof(long));
    printf("long has a size of %lu bytes \n",sizeof(long long));



}
