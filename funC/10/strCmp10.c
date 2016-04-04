/* strCmp10.c */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int output;
    char str1[] = "Apple iPhone";
    char str2[] = "Apple iPod";
    output = strcmp(str1, str2);

    if(output == 0)
        printf("zhe liangge zifuchuan xiangdeng\n");
    else
        printf("zhe liangge zifuchuan bu xiangdeng\n");

    system("pause");
    return 0;
}
