// Created by Zcr on 2022/8/2.
#include "stdio.h"

int fake_main(void) {
    int a = 9;
    a += (a = 3);
    printf("%d", a);
    return 0;
//    字节码:
//    main:
//    pushq	%rbp            // 开辟栈帧
//    movq	%rsp, %rbp      // 栈底指针前移至栈顶指针处
//    movl	$9, -4(%rbp)    // 对新开辟的栈帧存值: 9
//    movl	$3, -4(%rbp)    // 对新开辟的栈帧存值: 3
//    movl	-4(%rbp), %eax  // 将新开辟的栈帧存值3存入eax寄存器
//    addl	%eax, -4(%rbp)  // 对eax寄存器 与 新开辟栈帧的值做加分运算
//    movl	$0, %eax        // 重置eax寄存器
//    popq	%rbp            // 弹出栈帧
//    ret
}

