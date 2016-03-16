/* practice80.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 1, total = 0;
    do {
        total = total + i;
        i++;
    }while(i < 10);
    printf("total=%d\n", total);
    printf("xunhuan jieshu hou, i dengyu %d\n", i);
    system("pause");
    return 0;
}
