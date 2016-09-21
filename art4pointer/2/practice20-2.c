/* practice20-2.c */
#include<stdio.h>

int main()
{
    int a = 100, b = 200;

    const int *p = &a;
    int * const q = &b;

    printf("a = %d, *p = %d\n", a, *p);
    printf("b = %d, *q = %d\n", b, *q);

    p = &b;
    printf("*p = %d\n", *p);

    *q = a;
    printf("*q = %d\n", *q);

    return 0;
}
