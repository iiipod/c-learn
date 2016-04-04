// isupper.c
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    printf("qing shuru yige yingwen zimu: ");
    scanf("%c", &ch);
    if(isupper(ch))
        printf("%c shi yige daxie de yingwen zimu. \n", ch);
    else
        printf("%c shi yige xiaoxie de yingwen zimu. \n", ch);

    system("pause");
    return 0;
}
