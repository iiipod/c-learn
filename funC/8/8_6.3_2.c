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
            printf("qing shuru[%d][%d]de shujui: ",i, j);
            scanf("%lf", &num[i][j]);
        }
    }

    printf("xuehao\tC chengji\tjilu chengji\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d", i);
        for(j = 0; j < 2; j++)
        {
            printf("\t%.2f\t", num[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
