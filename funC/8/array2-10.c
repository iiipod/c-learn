/* array2-10.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num[2][3];
    int i, j;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("qing shuru num[%d][%d]de shuzhi: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }

    printf("\n ci shuzu de shuju ruxia: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j <3; j++)
        {
            printf("num[%d][%d]=%d\n", i, j, num[i][j]);
        }
    }

    
    return 0;
}
