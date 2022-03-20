//描述:给定一个浮点数，要求得到该浮点数的个位数;
//输入描述:一行，包括一个浮点数;
//输出描述:一行，包含一个整数，为输入浮点数对应的个位数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float a;
	scanf("%f", &a);
	printf("%d", (int)a % 10);//把a转换为int类型
	return 0;
}