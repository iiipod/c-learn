/* pointer10.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 100;
    int *ptr;
    ptr = &i;

    printf("i bianliang zai neicun de dizhi shi: %p\n", &i);
    printf("i bianliang de neirong shi: %d\n\n", i);

    printf("ptr bianliang zai neicun de dizhi shi: %p\n", &ptr);
    printf("ptr bianliang de neirong shi: %p\n", ptr);

    printf("jingyou *ptr dedao de neirong shi: %d\n", *ptr);

    
    return 0;
}
