// Created by Zcr on 2022/8/6.

// 该变量仅仅被当前内的rand1()与srand1()可见
static unsigned long int next = 1; /* 种子: 静态内部链接变量 */

/**
 * 生成随机数
 */
int rand1(void) {
    next = next * 1103515245 + 123456;
    return (unsigned int) (next / 65535) % 32768;
}

/**
 * 设置种子
 */
void srand1(unsigned int seed) {
    next = seed;
}


