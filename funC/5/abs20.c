/* abs20.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number, abs;
    printf("qing shuru yige zhengshu: ");
    scanf("%d", &number);
    abs = (number >= 0) ? number : -number;
    printf("%d de jueduizhi shi %d\n", number, abs);

    system("pause");
    return 0;
}
