/* arrayPointer40.c */
#include<stdio.h>
#include<stdlib.h>
int sum(int * , int);

int main()
{
    int num[6] = {10, 20, 30, 40, 50, 60};
    int total;

    total = sum(num, 6);
    printf("ci shuzu de zonghe wei: %d\n", total);

    system("pause");
    return 0;
}

int sum(int *p, int n)
{
    int i, t = 0;
    for(i = 0; i < n; i ++)
    {
        t += * (p + i);
    }
    return t;
}

