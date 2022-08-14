// Created by Zcr on 2022/8/13.
#include "stdio.h"

// ==============【#undef】========================
#define LIMIT 15
#undef LIMIT /* 取消 已定义的指令。使用场景: 如果想使用一个名称但又不确定之前是否已经被使用的情况下 */

// ==============【#ifdef,#ifndef】========================
// 条件编译
/**
 * 1.如果已经使用了#define定义了"LIMIT",则执行#else或者#endif之前的所有指令
 *   如果未定义"LIMIT",则执行#else到#endif之间的指令
 * 2.#ifndef也可以和#else,#endif一起使用,它的含义与#indef相反: 如果宏未被定义才执行
 */
#ifdef LIMIT
#include "stdio.h"
#else

#include "stdlib.h"

#endif

void fake_main() {
    /**
     * 输出：15
     */
#ifdef LIMIT
    printf("%d",LIMIT);
#else
    printf("Nothing");
#endif
}
// ==============【#if】========================
/**
 * if语句
 */
#if LIMIT == 15
/* do something*/
#elif LIMIT == 16
/* do something*/
#else
/* do something*/
#endif

// ==============【其他相关】========================
#line 1000 /* 把当前行号设置为10000 */
#line 10 "cool.c" /* 把当前行号设置为10,文件名设置为cool.c */

#if LIMIT!=15
//#error
#endif

// ==============【内联函数】========================
inline static void inline_func(void){
    /**
     * 什么是内联函数:
     * 1.就是这个函数体,既是定义也是声明
     * 2.同一个文件下的其他函数在使用它时,编译器可能会将内联函数内的函数体替换掉函数调用处的调用名,从而提升执行效率
     */
}




