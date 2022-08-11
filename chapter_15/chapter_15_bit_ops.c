// Created by Zcr on 2022/8/11.
/* 用结构声明一个位字段 */
/**
 * C以unsigned int作为位字段结构的基本布局单元,即使结构唯一的成员是1位字段,那也至少占用一个unsigned int的大小
 * 当声明的总位数超过一个unsigned int时会用到下一个unsigned int。一个字段不允许跨越2个unsigned int之间的边界
 * 其他见书P434
 */
struct {
    unsigned int autfd: 1;
    unsigned int bldfc: 1;
    unsigned int undln: 1;
    unsigned int itals: 1;

} prnt;

void ops_bit(void) {
    int a = 1;
    int b = 2;
    a = a & b;// 全1为1,有0为0
    a = a | b;// 有1为1,全0为0
    a = a ^ b;// 只有一个为1一个为0的情况下得0,其他情况都为0
    // b^0 =b
    a = ~b;// 对b按位取反,包括符号位

    /* 就如定义的一般,定义了4个一位的字段,所以每个成员只能赋值1或者0*/
    prnt.autfd = 1;
    prnt.bldfc = 0;

    /**
     * 对齐: 规定某类型的值必须以 x倍的地址开始赋值
     * 为什么要对其：有些机器先从偶数位开始寻址,再从奇数位开始寻址,这就导致一个4位int值需要2个寻址周期才能被完全定位
     */

}

