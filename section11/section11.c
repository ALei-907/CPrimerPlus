//
// Created by 雷立民 on 2022/7/30.
//
#include "stdio.h"

#define MSG "i am a symbolic string constant."
#define MAXLENGTH 81

void section11(void) {
    /**
     * 字符串是以"\0"结尾的char类型数组
     * Here are some strings.
     * i am a symbolic string constant.
     * i am a string in a array.
     * something is pointing at me.
     * i am a spring in a array.
     */
    char words[MAXLENGTH] = "i am a string in a array.";
    /* 这也是一种字符串的声明方式: 字符串字面量之间没有间隔,或者使用空白字符分割。ANSI C会认为他们是串联起来的字符串字面量*/
//    char words[MAXLENGTH] = "i am a string " "in a "
//                            "array.";
    const char *pt1 = "something is pointing at me.";
    /* puts只显示字符串,而且自动在显示的字符串末尾加上换行符 */
    puts("Here are some strings.");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);
}
