#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, j;
	int ch;
	scanf("%c", &ch);
	for (i = 1; i <= 3; i++) {
		for (j = 0; j < 3 - i; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++) {
			printf("%c", ch);
		}
		printf("\n");
	}
	for (i = 1; i < 3; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (j = 0; j < 5 - 2 * i; j++) {
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}
//输入描述:输入一个char类型字符;
//输出描述:输出一个用这个字符填充的对角线长5个字符，倾斜放置的菱形;
