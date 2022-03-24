#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Num(int x, int y) {
    while (x % y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    return y;
}
int main() {
    long n, m;
    scanf("%ld%ld", &n, &m);
    long sum = Num(n, m);
    long r = n / sum * m / sum * sum;
    printf("%ld\n", sum + r);
    return 0;
}
//输入描述:每组输入包含两个正整数n和m。(1 ≤ n ≤ 10^9，1 ≤ m ≤ 10^9)
//输出描述:对于每组输入，输出一个正整数，为n和m的最大公约数与最小公倍数之和