#include <stdio.h>

#define MSG "i am a symbolic string constant."
#define MAXLENGTH 81
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
//    char words[MAXLENGTH] = "i am a string in a array.";
    char words[MAXLENGTH] = "i am a string in a "
                            "array.";

    const char *pt1 = "something is pointing at me.";
    puts("Here are some strings.");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);

}


