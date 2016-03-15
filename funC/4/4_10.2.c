#include<stdio.h>
#include<stdlib.h>
int main()
{
    double i = 0, j = 0, sum, avg;
    printf("please input a number:");
    scanf("%lf", &i);
    printf("please input another number:");
    scanf("%lf", &j);
    sum = i + j;
    avg = sum / 2.0;
    printf("sum = %.2f, avg=%.2f\n", sum, avg);
    system("pause");
    return 0;
}
