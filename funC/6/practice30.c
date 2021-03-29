/* practice30.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, total = 0;
    for(i = 2; i <= 10; i = i + 2)
    {
        total += i;
    }
    printf("total=%d\n", total);
    printf("xunhuan jieshu hou, i dengyu %d\n", i);
    
    return 0;
}
