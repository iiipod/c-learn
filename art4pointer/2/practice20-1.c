/* practice20-1.c */
#include<stdio.h>

int main()
{
    int *p;
    *p = 120;

    printf("The address of p is %p", &p);
    printf("*p=%d\n", *p);

    return 0;
}
