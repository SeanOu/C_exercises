//描述:实现字母的大小写转换。多组输入输出;
// 输入描述:多组输入，每一行输入大写字母;
// 输出描述:针对每组输入输出对应的小写字母;
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		getchar();
//		if ('A' <= ch && ch <= 'Z') {
//			putchar(ch + 32);
//			printf("\n");
//		}
//		else {
//			putchar(ch - 32);
//			printf("\n");
//		}
//	}
//	return 0;
//}
int main() {
	int ch;
	while ((ch = getchar()) != EOF) {
		getchar();
		putchar(ch);
		//printf("\n");
	}
	return 0;
}