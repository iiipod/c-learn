#include<stdio.h>
#include<stdlib.h>
double change(double *, double *);

int main()
{
    double i, j;

    printf("qing shuru i de zhi: \n");
    scanf("%lf", &i);
    printf("qing shuru j de zhi: \n");
    scanf("%lf", &j);

    printf("wei diaoyong change() hanshu qian: \n");
    printf("i=%.2f, j=%.2f\n\n", i, j);

    printf("dianyong change() hanshu hou: \n");
    change(&i, &j);
    printf("i=%.2f, j=%.2f\n\n", i, j);

    
    return 0;
}

double change(double *x, double *y)
{
    double temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
