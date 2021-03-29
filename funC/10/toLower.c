// tolower.c
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    printf("qing shuru yige daxie de yingwen zimu: ");
    scanf("%c", &ch);
    printf("%c de xiaoxie yingwen zimu shi %c. \n", ch, tolower(ch));

    
    return 0;
}
