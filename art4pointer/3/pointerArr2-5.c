/* pointerArr2-5.c */
#include<stdio.h>

int main()
{
    int j[2][3] = {10, 20, 30, 40, 50, 60};
    int k;

    for(k=0;k<3;k++)
    {
        printf("j[%d] = %p\n", k, j[k]);
    }

    printf("\n");

    for(k=0;k<3;k++)
    {
        printf("j+%d = %p\n", k, j + k);
    }

    printf("\n");

    for(k=0;k<3;k++)
    {
        printf("*(j+%d) = %p\n", k, *(j + k));
    }

    return 0;
}
