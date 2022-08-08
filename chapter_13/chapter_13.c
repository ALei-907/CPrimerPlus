// Created by Zcr on 2022/8/8.
// 文件的格式: 文本模式 二进制格式
// IO级别: 底层IO(操作系统提供的基本IO(服务),标准高级IO(C库的标准包和stdio.h头文件的定义)
// 标准文件: C程序会自动打开的3个文件(标准输入,标准输出,标准错误输出)
#include <stdio.h>
#include <stdlib.h> // 提供exit()原型

int fake_main(int argc, char *argv[]) {
    int ch;
    FILE *fp;   // 文件指针
    unsigned long count = 0;
    /**
     * 为什么是2
     * argv[0]: 文件名,eg: ./a.o
     * argv[1]: 要打开的文件名称,eg: test.txt
     */
    if (argc != 2) {
        printf("Usage: %s file name.\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL) { /* 如果打不开文件的话*/
        printf("Can't open %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF) {
        putc(ch, stdout);  /* 标准输出,其实与putchar(ch)相同*/
        count++;
    }
    fclose(fp); /* 好习惯: IO流使用完应该及时关闭 */
    printf("File %s has %lu characters\n", argv[1], count);
}

