/* strCmp20.c */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int output;
    char str1[] = "Apple iPhone";
    char str2[] = "Apple iPod";
    output = strncmp(str1, str2, 5);

    if(output == 0)
        printf("zhe liangge zifuchuan xiangdeng\n");
    else
        printf("zhe liangge zifuchuan bu xiangdeng\n");

    
    return 0;
}
