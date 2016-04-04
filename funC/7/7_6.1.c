#include<stdio.h>
#include<stdlib.h>
void printstar(int);
void multiply99();

int main()
{
    printstar(72);
    multiply99();
    printstar(72);
    system("pause");
    return 0;
}

void printstar(int n)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        printf("*");
    }
    printf("\n");
}

void multiply99()
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
}
