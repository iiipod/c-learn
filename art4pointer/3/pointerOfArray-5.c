/* pointerOfArray-5.c */
#include<stdio.h>

int main()
{
    char *parr[] = {"Department", "Of", "Infomation", "Managerment"};

    printf("*parr[3] = %c\n", *parr[3]);
    printf("**(parr+3) = %c\n", **(parr + 3));
    printf("parr[3][0] = %c\n", parr[3][0]);
    printf("parr[2] = %s\n", parr[2]);
    printf("*(parr+2) = %s\n", *(parr + 2));

    return 0;
}
