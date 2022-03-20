//描述:输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
// 数据范围：年份满足1990≤y≤2015 ，月份满足1≤m≤12  ，日满足1≤d≤30
//输入描述:输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符。
//输出描述:三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。输出时如果月份或天数为1位数，需要在1位数前面补0。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i;
	int year, month, date;
	if (1990 <= year <= 2015 && 1 <= month <= 12 && 1 <= date <= 30) {
		scanf("%d", &i);
		year = i / 10000;
		month = i % 10000 / 100;
		date = i % 100;
		printf("year = %d\n", year);
		printf("month = %.2d\n", month);
		printf("date = %.2d\n", date);
	}
	else {
		printf("输入格式不正确");
	}
	return 0;
}