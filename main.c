#include <stdio.h>

// 为何在此处声明,因为程序是由上至下执行的,如果不在此处声明,那执行至main()时就不知道print_hello()表示的含义
void practice(void);    /* 1.声明函数原型 */

int main() {

    practice();         /* 2.5函数调用 */
    return 0;
}

void practice(void) {   /* 3.函数定义 */
    char your_talents[5][40] = {
            "Walking in a straight line",
            "Sleeping", "Watching television",
            "Mailing letters", "Reading email"
    };

    char (*ptr)[40] = your_talents;
    puts(your_talents[0]);
    printf("%c\n",**ptr);


    const char *my_talents[5] = {
            "Adding numbers swiftly",
            "Multiplying accurately", "Stashing data",
            "Following instructions to the letter",
            "Understanding the C language"
    };

    puts(my_talents[0]);
}

