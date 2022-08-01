#include "stdio.h"
#include "string.h"

// 为何在此处声明,因为程序是由上至下执行的,如果不在此处声明,那执行至main()时就不知道print_hello()表示的含义
void practice(void);    /* 1.声明函数原型 */

int main() {

    practice();         /* 2.5函数调用 */
    return 0;
}

void practice(void) {   /* 3.函数定义 */
    char chArr[] = "1111C";
    puts(chArr);

    /**
     * 语法错误: "1111"表示的是一个地址
     *          数组的首地址是const常量是不允许改变的
     */
    strcpy(chArr, "11C");
    puts(chArr);
}

