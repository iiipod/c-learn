#include<stdio.h>
#include<stdlib.h>
double tot(double [], int);

int main()
{
    double num[6];
    double total;
    int i;

    for(i = 0; i < 6; i++)
    {
        printf("qing shuru di %d ge shu: ", i);
        scanf("%lf", &num[i]);
    }

    printf("\nci shuzu de shuju ruxia: \n");

    for(i = 0; i < 6; i++)
    {
        printf("ci shuzu di %d ge yuansu wei: %.2f\n", i, num[i]);
    }

    total = tot(num, 6);
    printf("total=%.2f\n", total);

    system("pause");
    return 0;
}

double tot(double num[], int n)
{
    double total = 0;
    int i;

    for(i = 0; i < n; i++)
    {
        total += num[i];
    }
    return total;
}
