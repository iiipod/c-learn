/* arrayPointer20.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    double  a[5] = {11.1, 22.2, 33.3, 44.4, 55.5};
    int i;

    printf("shuzu yuansu suozai neicun de dizhi: \n");
    for(i = 0; i < 5; i++)
    {
        printf("&a[%d]=%p\n", i, &a[i]);
    }

    printf("\nlingwai yizhong neicun dizhi de biaoshi fangfa: \n");
    for(i = 0; i <5; i++)
    {
        printf("a+%d=%p\n", i, a + i);
    }

    printf("\nshuzu yuansu de zhi: \n");
    for(i = 0; i < 5; i++)
    {
        printf("a[%d]=%.1f\n", i, a[i]);
    }

    
    return 0;
}
