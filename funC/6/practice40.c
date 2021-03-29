/* practice40.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 2, total = 0;
    while(i <= 10)
    {
        total = total + i;
        i++;
    }
    printf("total=%d\n", total);
    printf("xunhuan jieshu hou, i dengyu %d\n", i);
    
    return 0;
}
