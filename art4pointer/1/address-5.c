/* address-5.c */
#include<stdio.h>

int main()
{
    double x, y, average;
    printf("qing shuru fudian shu x yu y: ");
    scanf("%lf %lf", &x, &y);
    average = (x + y) / 2;

    printf("x yu y de pingjunshu wei: %.2f\n", average);
    return 0;
}
