/* increment15.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 100, j = 200;
    int total = 0;
    total = i + j;
    i = i + 1;
    printf("total=%d, i=%d, j=%d\n", total, i, j);

    total =0;
    i = 100;
    i = i + 1;
    total = i + j;
    printf("total=%d, i=%d, j=%d\n", total, i, j);
    
    system("pause");
    return 0;
}
