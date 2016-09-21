/* exercise2-1.c */
#include<stdio.h>

int main()
{
    char *diamond = "5 kela zuanshi";
    char *p1 = diamond;
    char **p2 = &p1;
    char ***p3 = &p2;

    printf("&x = %p\n", &diamond);
    printf("&p1 = %p, p1 = %p\n", &p1, p1);
    printf("&p2 = %p, p2 = %p\n", &p2, p2);
    printf("&p3 = %p, p3 = %p\n", &p3, p3);

    printf("yixia de fangfa keyi dedao zuanshi: \n");
    printf("**p3 = %s, *p2 = %s, p1 = %s, diamond = %s\n", **p3, *p2, p1, diamond);

    return 0;
}
