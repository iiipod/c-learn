// toupper.c
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    printf("qing shuru yige xiaoxie de yingwen zimu: ");
    scanf("%c", &ch);
    printf("%c de daxie yingwen zimu shi %c. \n", ch, toupper(ch));

    
    return 0;
}
