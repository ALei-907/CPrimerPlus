//
// Created by Zcr on 2022/7/25.
//
#include <stdio.h>

int main(void) {
    int ten = 10, two = 2;
    /**
     * result: 10 is ten,2 is two,16 is constant
     * 为什么输出16? 因为 020表示为8进制的20
     */
    printf("%d is ten,%d is two,%d is constant", ten, two, 020);

    /**
     * result: 10进制: 10,8进制: 12,16进制: a
     * 输出为指定进制
     */
    printf("10进制: %d,8进制: %o,16进制: %x", 10, 10, 10);

    /**
     * result: 10进制: 10,8进制: 012,16进制: 0xa,16进制: 0XA
     * 显示进制前缀
     */
    printf("10进制: %d,8进制: %#o,16进制: %#x,16进制: %#X", 10, 10, 10, 10);

    /**
     * short has a size of 2 bytes
     * int has a size of 4 bytes
     * long has a size of 8 bytes
     * long has a size of 8 bytes
     *
     * sizeof是关键字,并不是函数
     * 如果sizeof修饰的是变量可以不加(),但如果修饰的是类型就必须要要加上()
     */
    printf("short has a size of %lu bytes \n", sizeof(short));
    printf("int has a size of %lu bytes \n", sizeof(int));
    printf("long has a size of %lu bytes \n", sizeof(long));
    printf("long has a size of %lu bytes \n", sizeof(long long));

    /**
     * result: D
     * 只存储最后一位字符
     */
    char c1 = 'ABCD';
    printf("%c", c1);
}
