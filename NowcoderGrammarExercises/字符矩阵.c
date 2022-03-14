#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, j;
	char ch;
	scanf("%c", &ch);
	for (i = 1; i <= 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%c ", ch);
		}
		printf("\n");
	}
	return 0;
}
//输入描述:一行读入一个 char 类型的字符;
//输出描述:输出这个字符组成的 3*3 矩形;