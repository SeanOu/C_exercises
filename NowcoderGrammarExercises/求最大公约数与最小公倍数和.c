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
//��������:ÿ�������������������n��m��(1 �� n �� 10^9��1 �� m �� 10^9)
//�������:����ÿ�����룬���һ����������Ϊn��m�����Լ������С������֮��