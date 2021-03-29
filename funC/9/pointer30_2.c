/* pointer30.c */
/* Error example */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 100, j = 200;

    printf("i=%d, j=%d\n\n", i, j);
    j = i;
    i = j;

    printf("i=%d, j=%d\n", i, j);

    
    return 0;
}
