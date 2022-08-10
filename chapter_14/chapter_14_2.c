// Created by Zcr on 2022/8/10.
#include "stdio.h"

struct person {
    int id;
    /* 匿名内部结构 */
    struct {
        char first[20];
        char last[20];
    };
};

void fake_main() {
    /**
     * 举例使用匿名结构
     */
    struct person ted = {1, {"Lei", "NiuBi"}};
    printf("%s", ted.first);
}



