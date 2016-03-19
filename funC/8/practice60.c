/* practice60.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j, k;
    double num[2][3][4];

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 4; k++)
            {
                printf("qing shuru num[%d][%d][%d]de shuju: ", i, j, k);
                scanf("%lf", &num[i][j][k]);
            }
        }
    }
    printf("\nci shuzu de shuju ruxia: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 4; k++)
            {
                printf("num[%d][%d][%d]=%.2f\n", i, j, k, num[i][j][k]);
            }
        }
    }

    system("pause");
    return 0;
}
