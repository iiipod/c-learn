/* arrayPointer30.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i;
    int *ptr = a;

    printf("shuzu a diyige yuansu suozai neicun de dizhi wei: \n");
    printf("a=%p\n", a);
    printf("&a[0]=%p\n", &a[0]);
    printf("\nmuqian ptr de neirong shi shuzu diyige yuansu suozai neicun dizhi. \n");
    printf("ptr=%p\n", ptr);

    printf("shuzu yuanse de zhi: \n");
    for(i = 0; i <5; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    printf("\nke jingyou * dedao shuzu yuansu de zhi: \n");
    for(i = 0; i < 5; i++)
    {
        printf("* (ptr + %d)=%d\n", i, * (ptr + i));
    }

    system("pause");
    return 0;
}
