/* practice20.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, total = 0;
    for(i = 1; i < 10; i++)
    {
        total += i;
    }
    printf("total=%d\n", total);
    printf("xunhuan jieshu hou, i dengyu %d\n", i);
    system("pause");
    return 0;
}
