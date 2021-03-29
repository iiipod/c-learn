/* practice40.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    double num[2][3];
    int i, j;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("qing shuru num[%d][%d]de shuju: ", i, j);
            scanf("%lf", &num[i][j]);
        }
    }

    printf("\nci shuzu de shuju ruxia: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("num[%d][%d]=%f\n", i, j, num[i][j]);
        }
    }

    
    return 0;
}
