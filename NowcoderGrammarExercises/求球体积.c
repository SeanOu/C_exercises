#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    double r;
    double s;
    scanf("%lf", &r);
    s = 3.14 * r * r * r * 4 / 3;
    printf("%lf", s);
    return 0;
}
//输入描述:输入球的半径
//输出描述:输出球的体积   π=3.14