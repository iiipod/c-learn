/* address-3.c */
#include<stdio.h>

int main()
{
    int x=100, y=200, z=300;
    printf("x bianliang de dizhi shi %p\n", &x);
    printf("y bianliang de dizhi shi %p\n", &y);
    printf("z bianliang de dizhi shi %p\n", &z);

    printf("x bianliang de neirong shi %d\n", x);
    printf("y bianliang de neirong shi %d\n", y);
    printf("z bianliang de neirong shi %d\n", z);

    return 0;
}
