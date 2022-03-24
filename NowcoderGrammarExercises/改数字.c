#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int cal(int n)
{
    if (n < 10 && n % 2 == 0)
    {
        return 0;
    }
    else if (n < 10)
    {
        return 1;
    }
    else
    {
        return 10 * cal(n / 10) + cal(n % 10);          //递归
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", cal(n));
    return 0;
}

//描述:现在得到了一个数，想把每位的数变成0或1。如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0
//输入描述:输入包含一个整数n (0 ≤ n ≤ 10^9)
//输出描述:输出一个整数，即修改后得到的数字