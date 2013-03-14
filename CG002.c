/*
本程序演示整型数据的定义、赋值和溢出
*/
#include "stdio.h"
int main()
{
    int a;
    short b;
    long c;
    printf("sizeof(int)=%d\n",sizeof(a));
    printf("sizeof(short)=%d\n",sizeof(b));
    printf("sizeof(long)=%d\n",sizeof(c));
    /*
    sizeof是C语言中的以一个关键字，可以用来
    查看某个变量在内存中的占用空间，单位是字节
    字节数乘以8即可得到字位数，如int类型在内存
    中占用4个字节32位，32位中有一位是符号位，31
    位数值位，它的表示数字的范围是-2（31次方）到
    +2（31次方）-1，其它数据类型与此类似，
    unsigned类型没有符号位，因为它的表示范围是
    0到2的N次方-1.N为该类型在内存中的位数
    */
    unsigned int d=0;
    d=d-1;
    printf("d=%u\n",d);
    /*
    d=4294967295,0-1应该等于-1，但是由于溢出，
    变成了4294967295
    */


}
