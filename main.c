#include "stdio.h"

// 为何在此处声明,因为程序是由上至下执行的,如果不在此处声明,那执行至main()时就不知道print_hello()表示的含义
void practice(void);    /* 1.声明函数原型 */

struct H {
    int c;
};

struct A {
    int a;
    int c;
    struct H h;
};


int main() {
    struct A a, b;
    struct H h;
    h.c = 3;
    a.a = 1;
    a.c = 2;
    b = a;

    printf("a.h.c=[%d],b.h.c=[%d]\n", a.h.c, b.h.c);
    printf("a.h.c=[%p],b.h.c=[%p]\n", &a.h.c, &b.h.c);

    /* 2.函数调用 */
//    practice();
    return 0;
}

void practice(void) {   /* 3.函数定义 */
#ifdef size
    printf("%d", size);
#else
    printf("Nothing");
#endif

}


char *getAndSetChar(char *pChar, char setChar) {
    static char return_val;
    return_val = *pChar;
    pChar[0] = setChar;
    printf("getAndSetChar$return_val: %p\n ", &return_val);
    return &return_val;
}



