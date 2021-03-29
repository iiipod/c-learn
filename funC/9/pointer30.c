/* pointer30.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 100, j = 200;
    int temp;

    printf("i=%d, j=%d\n\n", i, j);
    temp = i;
    i = j;
    j = temp;

    printf("i=%d, j=%d\n", i, j);

    
    return 0;
}
