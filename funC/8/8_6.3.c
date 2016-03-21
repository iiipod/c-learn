#include<stdio.h>
#include<stdlib.h>
int main()
{
    double num[5][2];
    int i, j;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("qing shuru[%d][%d]de shujui: ", i, j);
            scanf("%lf", &num[i][j]);
        }
    }

    printf("xuehao\tC chengji\tjilu chengji\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\t%.2f\t\t%.2f\n", i, num[i][0], num[i][1]);
    }
    system("pause");
    return 0;
}
