/* practice70.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 111;
    int total = 100;
    total = i++;
    printf("total=%d, i=%d\n", total, i);

    total = 200;
    i = 222;
    total = ++i;
    printf("total=%d, i=%d\n", total, i);
    
    return 0;
}
