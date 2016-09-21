/* practice10.c */
#include<stdio.h>
int main()
{
    double x, y, average;
    printf("qing shuru fudian shu x he y: ");
    scanf("%lf %lf", &x, &y);
    average = (x + y) / 2;
    printf("x he y de pingjunshu wei: %.2f\n", average);

    return 0;
}
