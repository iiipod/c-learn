/* for2-10.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j;
    for(i = 1; i <= 9; i++)
    {
        for(j = 1; j <= 9; j++)
        {
            printf("%d * %d = %2d\t", j, i, i * j);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}