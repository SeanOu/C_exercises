//����:��n�����̣�KiKiÿh�����ܺȹ�һ�����̣�����KiKi�ںȹ�һ������֮ǰ�������һ������ô����m���Ӻ��ж��ٺ�δ�򿪵����̣�
//��������:�������룬ÿ�������һ�У�����n��h��m����Ϊ���������������ݱ�֤m <= n * h
//�������:���ÿ�����룬���Ҳ��һ�У�ʣ�µ�δ�򿪵����̺���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int n, h, m, num;
    scanf("%d%d%d", &n, &h, &m);
    if (m > n * h) {
        printf("��������\n");
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