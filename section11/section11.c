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
    /* pt1为啥可以表示为字符串? 右侧的字符串·是一个字符数组,而*pt1记录数组首元素的地址*/
    /**
     * pt1为啥可以表示为字符串?
     * 右侧的字符串·是一个字符数组,而*pt1记录数组首元素的地址
     * 猜想: puts行数会从pt1处依次读取没个字符直到读取到'\0';
     */
    const char *pt1 = "something is pointing at me.";
    /* puts只显示字符串,而且自动在显示的字符串末尾加上换行符 */
    puts("Here are some strings.");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);

    /**
     * 通过指针与数组进行初始化字符串的异同
     * 1.*chArr=*ptChar='i';
     * 2.++chArr是不被允许的操作,因为chArr表示的是数组首元素的操作(操作chArr,不就导致数组无法被正常检索了吗)
     *   *ptChar++是被允许的操作,因为一开始它可以代表数组首元素的,后续可以通过操作指针来遍历其他元素
     * 3.chArr[]内的元素是可以被修改的,因为它是将字符串拷贝一份副本至内存中
     *   *ptChar='x'是不被允许的,因为是字符串常量
     */
    const char *ptChar = MSG;
    char chArr = MSG;
//    *ptChar = 'c';
//    printf("%c", *(++chArr));

}
