#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    double r1, r2;
    double c = 0;
    scanf("%lf%lf", &r1, &r2);
    c = 1 / r1 + 1 / r2;
    printf("%lf", 1 / c);
    return 0;
}

//描述:有一个阻值是 r1 和一个阻值 r2 的电阻，牛牛想知道这两个电阻并联后等效电阻是多少
//     并联电路的等效电阻公式是:1/(1/r1+1/r2);
