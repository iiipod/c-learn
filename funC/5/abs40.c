/* abs40.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number;
    printf("qing shuru yige zhengshu: ");
    scanf("%d", &number);
    (number % 2 == 0) ? printf("%d shi oushu\n", number) : printf("%d shi jishu\n", number);

    system("pause");
    return 0;
}
