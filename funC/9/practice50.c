/* practice50.c */
#include<stdio.h>
#include<stdlib.h>
double sum(double *, int);

int main()
{
    double num[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    double total;

    total = sum(num, 6);

    printf("ci shuzu de zonghe wei: %.2f\n", total);

    system("pause");
    return 0;
}

double sum(double *x, int n)
{
    int i;
    double temp = 0.0;
    for(i = 0; i < n; i++)
    {
        temp += *(x + i);
    }
    return temp;
}
