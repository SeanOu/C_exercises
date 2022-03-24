#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    long t, n;
    scanf("%d", &n);
    if (n >= 12) {
        t = (n / 12) * 4 + 2;
    }
    else {
        t = 2;
    }
    printf("%ld", t);
    return 0;
}
//题目描述:前面有n个人在等电梯。电梯每次可以乘坐12人，
//         每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）（假设最初电梯在1层）
//输入描述:输入包含一个整数n (0 ≤ n ≤ 10^9)
//输出描述:输出一个整数，即到达楼上需要的时间