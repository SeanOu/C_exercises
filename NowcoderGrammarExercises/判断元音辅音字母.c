#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int temp = 0;
    char crr;
    char vowel[10] = { 'a','A','e','E','i','I','o','O','u','U' };
    while (scanf("%c", &crr) != EOF)
    {
        if (crr != '\n')
        {
            for (temp = 0; temp < 10; temp++)
            {
                if (crr == vowel[temp])
                {
                    printf("Vowel\n");
                    temp = 20;
                }
            }
            if (temp == 10)
            {
                printf("Consonant\n");
            }
        }
    }
    return 0;
}
//描述:有五个字母A(a), E(e), I(i), O(o),U(u)称为元音，其他所有字母称为辅音，
//     编写程序判断输入的字母是元音（Vowel）还是辅音（Consonant）
//输入描述:多组输入，每行输入一个字母。
//输出描述:针对每组输入，输出为一行，如果输入字母是元音（包括大小写），输出“Vowel”，如果输入字母是非元音，输出“Consonant”