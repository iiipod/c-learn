/* practice10.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, total = 0;
    for(i = 2; i <= 10; i++)
    {
        total += i;
    }
    printf("total=%d\n", total);
    system("pause");
    return 0;
}
