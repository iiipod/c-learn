/* onePointer.c */
#include<stdio.h>

int main()
{
    int x = 100, y = 200;
    int *ptr = &x;

    printf("X bianliang suozai de dizhi wei: %p, zhi wei %d\n", &x, x);
    printf("Y bianliang suozai de dizhi wei: %p, zhi wei %d\n", &y, y);
    printf("ptr bianliang suozai de dizhi wei: %p\n\n", &ptr);

    printf("ptr bianliang limian suo fang de neirong wei: %p\n", ptr);
    printf("x = %d, *ptr = %d\n\n", x, *ptr);

    ptr = &y;

    printf("ptr bianliang limian suo fang de neirong wei: %p\n", ptr);
    printf("y = %d, *ptr = %d\n", y, *ptr);

    return 0;
}
