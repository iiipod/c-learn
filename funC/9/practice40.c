/* practice40.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a[5] = {11.11, 22.22, 33.33, 44.44, 55.55};
    int i;
    double *ptr = a;

    printf("shuzu yuansu de zhi: \n");
    for(i = 0; i < 5; i++)
    {
        printf("a[%d]=%.2f\n", i, a[i]);
    }

    printf("\nke jingyou * dedao shuzu yuansu de zhi: \n");
    for(i = 0 ; i < 5; i++)
    {
        printf("* (ptr + %d)=%.2f\n", i, * (ptr + i));
    }

    
    return 0;
}
