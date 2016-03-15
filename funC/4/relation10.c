/* relation10.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 123, j = 100;
    printf("%d < %d = %d\n", i, j, i < j);
    printf("%d <= %d = %d\n", i, j, i <= j);
    printf("%d > %d = %d\n", i, j, i > j);
    printf("%d >= %d = %d\n", i, j, i > j);
    printf("%d == %d = %d\n", i, j, i == j);
    printf("%d != %d = %d\n", i, j, i != j);
    system("pause");
    return 0;
}
