/* arith30.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 103, j = 65, k = 2;
    int total = 0;
    total = i + j;
    printf("%d+%d=%d\n",i, j, total);
    
    i += j;
    printf("i=%d\n", i);
    
    i -= j;
    printf("i=%d\n", i);
    
    i *= k;
    printf("i=%d\n", i);
    
    i /= k;
    printf("i=%d\n", i);
    
    i %= k;
    printf("i=%d\n", i);
    
    
    return 0;
}
