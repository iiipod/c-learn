/* practice60.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 1, total = 0;
    while(i <= 10)
    {
        total = total + i;
        i = i + 2;
    }
    printf("total=%d\n", total);
    printf("xunhuan jieshu hou, i dengyu %d\n", i);
    
    return 0;
}
