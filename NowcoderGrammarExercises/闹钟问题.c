#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int h, m, k;
    scanf("%d:%d %d", &h, &m, &k);
    if (0 <= h && h <= 23 && 0 <= m && m <= 59) {
        int m2 = h * 60 + m + k;
        printf("%02d:%02d\n", m2 / 60 % 24, m2 % 60);
    }
    else {
        printf("输入有误");
    }
    return 0;
}
//问题描述:设定一个闹钟起床学习(只考虑时和分，不考虑日期)
//输入描述:输入现在的时刻以及要睡的时长k（单位：minute），中间用空格分开。
//输入格式：hour:minute k(如hour或minute的值为1，输入为1，而不是01)
//(0 ≤ hour ≤ 23，0 ≤ minute ≤ 59，1 ≤ k ≤ 109)
//输出描述:对于每组输入，输出闹钟应该设定的时刻，输出格式为标准时刻表示法（即时和分都是由两位表示，位数不够用前导0补齐）