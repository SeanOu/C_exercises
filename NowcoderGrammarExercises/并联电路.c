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

//����:��һ����ֵ�� r1 ��һ����ֵ r2 �ĵ��裬ţţ��֪�����������貢�����Ч�����Ƕ���
//     ������·�ĵ�Ч���蹫ʽ��:1/(1/r1+1/r2);
