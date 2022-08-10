// Created by Zcr on 2022/8/10.

/**
 * 联合是一种数据类型,表示可以在同一块内存空间中存储不同的数据类型(不是同时存储)
 * 即：以下声明的联合只能存储 一个int类型的值 或者 一个double类型的值 或者 一个char类型的值
 */
union hold {
    int digit;
    double bigfl;
    char letter;
};

void fake_main() {
    union hold valA;
    valA.letter = 'A';
    /* 联合的三种初始化方式 */
    union hold valB = valA; // 使用另一个联合赋值
    union hold valC = {88}; // 初始化联合的第一个元素(该方式只能初始化第一个元素)
    union hold valD = {.letter='D'};    // C99标准: 指定初始化器


}


