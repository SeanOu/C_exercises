//����:����һ��������f, ��ʾ�����¶�, �����Ӧ�������¶�c , c=5/9*(f-32)
//��������:����һ��������f(1 <= f<= 100000)
//�������:���������,����3λС��

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    double f, c;
    scanf("%lf", &f);
    c = 5.0 / 9.0 * (f - 32);
    printf("%.3f", c);
    return 0;
}