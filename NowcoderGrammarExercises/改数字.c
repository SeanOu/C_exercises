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
        return 10 * cal(n / 10) + cal(n % 10);          //�ݹ�
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", cal(n));
    return 0;
}

//����:���ڵõ���һ���������ÿλ�������0��1�����ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0
//��������:�������һ������n (0 �� n �� 10^9)
//�������:���һ�����������޸ĺ�õ�������