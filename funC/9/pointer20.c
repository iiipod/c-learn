/* pointer20.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 100;
    int *ptr = &i;

    printf("i=%d\n", i);
    printf("*ptr=%d\n\n", *ptr);

    *ptr = *ptr + 1;
    printf("i=%d\n", i);
    printf("*ptr=%d\n\n", *ptr);

    i = i + 1;
    printf("i=%d\n", i);
    printf("*ptr=%d\n\n", *ptr);

    system("pause");
    return 0;
}
