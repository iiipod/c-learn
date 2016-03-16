/* practice90.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 2, total = 0;
    do {
        total = total + i;
        i = i + 2;
    }while(i <= 10);
    printf("total=%d\n", total);
    printf("xunhuan jieshu hou, i dengyu %d\n", i);
    system("pause");
    return 0;
}
