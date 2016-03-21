/* arrayPointer10.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
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
        printf("a[%d]=%d\n", i, a[i]);
    }

    system("pause");
    return 0;
}
