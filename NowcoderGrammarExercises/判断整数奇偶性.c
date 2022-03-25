#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int i;
    while (scanf("%d", &i) != EOF)//不限制输入个数 efo（end of file）
   /*如果不加" != EOF"，那么这个程序就是个死循环，会一直运行下去；加上" != EOF"后该程序就不是死循环了，如果在终端不进行输入该程序会自动结束(while的意思就是说当当前输入缓存还有东西时就一直读取，直到输入缓存中的内容为空时停止)。*/
        if (i % 2 == 0)
            printf("Even\n");
        else
            printf("Odd\n");
    return 0;
}
//输入描述:多组输入，每行输入包括一个整数
//输出描述:针对每行输入，输出该数是奇数（Odd）还是偶数（Even）