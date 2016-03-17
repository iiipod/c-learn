#include<stdio.h>
#include<stdlib.h>
double sum(double x, double y);
void printstar();

double main()
{
    printstar(20);
    double x, y, total;
    printf("qing shuru x de zhi: ");
    scanf("%lf", &x);
    printf("qing shuru y de zhi: ");
    scanf("%lf", &y);
    total = sum(x, y);
    printstar(20);
    system("pause");
    return 0;
}

void printstar(n)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        printf("*");
    }
    printf("\n");
}

double sum(double x , double y)
{
    double total;
    total = x + y;
    printf("zonghe wei %.2f\n", total);
}
