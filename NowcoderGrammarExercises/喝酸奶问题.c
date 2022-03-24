//描述:有n盒酸奶，KiKi每h分钟能喝光一盒酸奶，并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？
//输入描述:多组输入，每组输入仅一行，包括n，h和m（均为整数）。输入数据保证m <= n * h
//输出描述:针对每组输入，输出也仅一行，剩下的未打开的酸奶盒数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int n, h, m, num;
    scanf("%d%d%d", &n, &h, &m);
    if (m > n * h) {
        printf("输入有误\n");
    }
    else {
        if (m % h > 0) {
            num = n - (m / h + 1);
        }
        else {
            num = n - m / h;
        }
        printf("%d", num);
    }
    return 0;
}