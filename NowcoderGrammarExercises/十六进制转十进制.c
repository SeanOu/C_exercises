//输出描述:十六进制整数ABCDEF对应的十进制整数，所占域宽为15

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i = 0XABCDEF;
	printf("%15d", i);
	return 0;
}