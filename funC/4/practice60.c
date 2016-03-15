/* practice60.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 100, j = 100, k=100;
    printf("%d < %d && %d < %d = %d\n", i, j, j, k, (i < j && j < k));
    printf("%d < %d && %d > %d = %d\n", i, j, j, k, (i < j && j > k));
    printf("%d < %d || %d > %d = %d\n", i, j, j, k, (i < j || j > k));
    printf("%d < %d = %d\n", i, j, i < j);
    printf("!(%d < %d) = %d\n", i, j, !(i < j));
    system("pause");
    return 0;
}
