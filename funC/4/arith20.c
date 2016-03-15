/* arith20.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    double x = 5.0;
    int i = 123, j = 5;
    
    printf("%d/%d=%d\n", i, j, i / j);
    printf("%d/%.1f=%f\n", i, x, i / x);
    printf("%d/5.0=%.2f\n", i, i / 5.);
    system("pause");
    return 0;
}
