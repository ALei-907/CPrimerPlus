// Created by Zcr on 2022/8/8.
// 文件的格式: 文本模式 二进制格式
// IO级别: 底层IO(操作系统提供的基本IO(服务),标准高级IO(C库的标准包和stdio.h头文件的定义)
// 标准文件: C程序会自动打开的3个文件(标准输入stdin,标准输出stdout,标准错误输出stderr)
#include <stdio.h>
#include <stdlib.h> // 提供exit()原型

/**
 * 文件读写程序,ubuntu实践: $: ./a.out test.txt
 * @param argc 参数个数(程序文件名,和打开文件名列表都是计入其中的)
 * @param argv  打开的文件列表(其实是字符串数组)
 */
int fake_main(int argc, char *argv[]) {
    int ch;
    /**
     * 文件指针:
     * 文件指针并不指向实际的文件,而是指向一个包含文件信息的数据对象(Linux内核设计与实现中对与文件的实现)
     * 该数据对象(包含操作文件的IO函数所用的缓冲区信息(缓冲区位置,占用程度,操作的文件等))
     */
    FILE *fp;
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
        exit(EXIT_FAILURE); /* 函数关闭所有打开的文件并结束程序 */
        /* ANSI C规定: 在最初调用的main()中使用return与exit()效果相同,所以在这种情况下 return 0 等同与exit(0) */
    }

    FILE *out; // 模拟复制一个文件
    char *out_file_name = "copy.txt";
    if ((out = fopen(out_file_name, "w")) == NULL) { /* 读取文件失败 */
        fprintf(stderr,"Can't create file: %s.\n", out_file_name);/* 如果创建文件出现异常,可用来将错误信息发送到指定文件*/
        exit(EXIT_FAILURE);
    }
    /* getc(): 要告诉函数从指定的文件中获取一个字符串 */
    while ((ch = getc(fp)) != EOF) {
        /**
         * 标准输出,其实与putchar(ch)相同,类UNIX系统中万物皆文件
         */
        putc(ch, stdout);
        putc(ch, out);
        count++;
    }
    /**
     * 关闭成功: return 0
     * 关闭失败: return EOF
     */
    fclose(fp); /* 好习惯: IO流使用完应该及时关闭 */
    fclose(out);
    printf("File %s has %lu characters\n", argv[1], count);
    return 0;
}

