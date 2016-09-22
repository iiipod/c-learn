/* practice20-1.c */
#include<stdio.h>

int main()
{
    int i = 200;
    int *p;

    /*
        p = &i;
        *p = i;
    */
    *p = i;


    printf("The address of p is %p\n", &p);
    printf("*p=%d\n", *p);

    return 0;
}
