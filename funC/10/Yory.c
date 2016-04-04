// Yory.c
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    printf("qingwen shifou yao jixu bianxie chengxu(Y/y): ");
    scanf("%c", &ch);

    if(tolower(ch) == 'y')
        printf("OK, na mingtian zai qu kan dianying.\n");
    else
        printf("OK, na xianzai jiu qu kan dianying.\n");

    system("pause");
    return 0;
}
