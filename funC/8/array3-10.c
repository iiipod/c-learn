/* array3-10.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num[3][2][3];
    int i, j, k;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 3; k++)
            {
                printf("qing shuru num[%d][%d][%d]de ziliao: ", i, j, k);
                scanf("%d", &num[i][j][k]);
            }
        }
    }

    printf("\nci shuzu de shuju ruxia: ");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 3; k++)
            {
                printf("num[%d][%d][%d]=%d\n", i, j, k, num[i][j][k]);
            }
        }
    }

    system("pause");
    return 0;
}
