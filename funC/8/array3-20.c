/* array3-20.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num[3][2][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    int i, j, k;

    printf("ci shuzu de shuju ruxia: \n");
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

    
    return 0;
}
