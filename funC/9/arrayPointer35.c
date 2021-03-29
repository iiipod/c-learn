/* arrayPointer35.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i;
    int *ptr = a + 2;

    printf("shuzu a diyige yuansu suozai neicun de dizhi wei: \n");
    printf("a=%p\n", a);
    printf("&a[0]=%p\n\n", &a[0]);

    printf("\nshuzu a di 3 ge yuansu suozai neicun dizhi wei: \n");
    printf("a+2=%p\n", a + 2);
    printf("&a[2]=%p\n", &a[2]);

    printf("\nmuqian ptr de neirong shi shuzu di 3 ge yuansu suozai neicun dizhi. \n");
    printf("ptr=%p\n\n", ptr);

    printf("shuzu yuansu de zhi: \n");
    for(i = 0; i <5; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    printf("\nke jingyou * dedao shuzu yuansu de zhi: \n");
    printf("* (ptr - 2)=%d\n", * (ptr - 2));
    printf("* (ptr - 1)=%d\n", * (ptr - 1));
    for(i = 0; i < 3; i++)
    {
        printf("* (ptr + %d)=%d\n", i, * (ptr + i));
    }

    
    return 0;
}
