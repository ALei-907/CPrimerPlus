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
    char ch;
    ch = getchar();
    while (1) {
        if (ch != '\n')
            switch (ch) {
                case 65:
                    printf("A\n");
                    break;
                case 66:
                    printf("B\n");
                    break;
                default:
                    printf("Other Char\n");
                    break;
            }
        if (ch == '|')
            break;
        ch = getchar();
    }
}
