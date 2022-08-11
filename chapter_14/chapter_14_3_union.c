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
struct hold_union {
    /* 匿名联合,与匿名结构类似 */
    union {
        int digit;
        char letter;
    };
};

void fake_main() {
    union hold valA;
    valA.letter = 'A';
    /* 联合的三种初始化方式 */
    union hold valB = valA; // 使用另一个联合赋值
    union hold valC = {88}; // 初始化联合的第一个元素(该方式只能初始化第一个元素)
    union hold valD = {.letter='D'};    // C99标准: 指定初始化器

    /* 使用联合 */
    /* 在联合中一次只能存储一个值,即使有足够的空间也不能同时存储一个int和一个char */
    valA.digit = 88;    // 把23存储在valA，占2字节
    valA.bigfl = 2.0;   // 清除23,存储2.0，占8字节
    valA.letter = 'A';  // 清除2.0,存储'A',占1字节

    /* 联合指针*/
    union hold *pu = &valA;
    int x = pu->letter;     // 指针获取指
    int y = (*pu).letter;   // 指针解引用使用.获取值
    int z = valA.letter;    // 联合获取值


}


