/* practice10.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i = 88;
    int *ptr = &i;

    printf("i=%d\n", i);
    printf("*ptr=%d\n\n", *ptr);

    *ptr = *ptr + 12;
    printf("i=%d\n", i);
    printf("*ptr=%d\n\n", *ptr);

    
    return 0;
}
