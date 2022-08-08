// Created by Zcr on 2022/8/7.
// 根据已经制定好的内存管理规则，将自动选择其作用域和存储期。然而可以选择库函数来管理和分配内存
// 程序把它可用的内存分为3个部分: 静态变量,自动变量,动态内存分配
/**             创建时机        销毁时机        存储区域
 * 静态变量      程序运行时       程序结束时      静态变量
 * 自动变量      代码块声明处     离开代码块时     栈上(比动态内存的使用要快)
 * 动态内存分配   malloc()       调用free()     动态内存区域
 */
#include <stdlib.h>
#include <stdio.h>  /* 申明malloc()所在的头文件 */

int ARR_SIZE = 30;

void chapter_12_7(void) {
    /**
     * 尝试使用malloc()创建一个数组
     *              内存释放                                            ｜   其他
     * malloc()     free()释放内存                                      ｜   被掉函数可以返回指针供其他函数使用,并由其他函数调用free()
     * int arr[n]   不需要调用free(),在程序离开定义数组所在的块是自动销毁     ｜    只能在自动内存中进行创建
     * 可以在其他函数调用
     *
     */
    double *pDouble;
    /* 参数: 所需创建内存的大小,单位: 字节 */
    /* 返回: Void指针,相对于"通用指针"。创建内存的首地址,当分配不到所需的内存时返回NULL */
    pDouble = (double *) malloc(ARR_SIZE * sizeof(double));
    pDouble[0] = 1.0F;
    pDouble[1] = 2.0F;
    for (int i = 0; i < ARR_SIZE; ++i) {
        printf("pDouble[%d]=%f", i, pDouble[i]);
    }

    /**
     * calloc也是一种申请动态内存的方式: 参数1 -> 所需存储的单元数量, 参数2 -> 存储单元的大小
     */
    pDouble = calloc(ARR_SIZE, sizeof(double));

    /**
     * 1.动态分配内存的声生命周期从调用malloc() | calloc()开始到调用free()释放内存结束
     * 2.free()的参数是malloc()返回的地址,释放之前malloc() | calloc()分配的内存
     * 3.不释放内存,可能导致内存泄露(不能被访问到)
     * 4.free()与malloc()的指针变量可以不同,但必须存储相同的地址,但是不能释放同一块内存2次
     * 5.free后只是做了个标记，告诉系统这块内存不用了，一旦调用后， 那个地址是不被保护的， 也就是说其他的变量随时可能占用那个地址
     */

}


