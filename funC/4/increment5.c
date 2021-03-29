/* increment5.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 100;
    int total = 0;
    total = i++;
    printf("total=%d, i=%d\n", total, i);

    total =0;
    i = 100;
    total = ++i;
    printf("total=%d, i=%d\n", total, i);
    
    
    return 0;
}
