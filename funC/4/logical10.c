/* logical10.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 90, j = 100, k=110;
    printf("%d < %d && %d < %d = %d\n", i, j, j, k, (i < j && j < k));
    printf("%d < %d && %d > %d = %d\n", i, j, j, k, (i < j && j > k));
    printf("%d < %d || %d > %d = %d\n", i, j, j, k, (i < j || j > k));
    printf("%d < %d = %d\n", i, j, i < j);
    printf("!(%d < %d) = %d\n", i, j, !(i < j));
    
    return 0;
}
