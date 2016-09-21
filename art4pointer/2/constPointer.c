/* constPointer.c */
#include<stdio.h>

int main()
{
    int a = 100, b = 200;

    const int *p = &a;
    int * const q = &b;

    /* YES!!!
        p = &b;
        *q = a;
        b = 888;
    */

    /* NO!!!
        *p = b;
        q = &a;
    */

    printf("a = %d, *p = %d\n", a, *p);
    printf("b = %d, *q = %d\n", b, *q);

    printf("*p = %d\n", *p);

    printf("*q = %d\n", *q);

    return 0;
}
