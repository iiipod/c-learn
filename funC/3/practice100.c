#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j, k;
    printf("qing shuru zhengshu i:");
    scanf("%d", &i);
    printf("qing shuru zhengshu j:");
    scanf("%d", &j);
    printf("qing shuru zhengshu k:");
    scanf("%d", &k);

    printf("\n");
    printf("i=|%d|, j=|%d|, k=|%d|\n", i, j, k);
    printf("i=|%3d|, j=|%3d|, k=|%3d|\n", i, j, k);
    printf("i=|%8d|, j=|%8d|, k=|%8d|\n", i, j, k);
    printf("i=|%-8d|, j=|%-8d|, k=|%-8d|\n", i, j, k);
    system("pause");
    return 0;
}
