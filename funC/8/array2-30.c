/* array2-30.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num[2][3] = {10, 20, 30, 40, 50, 60};
    int i, j, total = 0;

    printf("ci shuzu de shuju ruxia: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j <3; j++)
        {
            printf("num[%d][%d]=%d\n", i, j, num[i][j]);
            total += num[i][j];
        }
    }
    printf("\nci shuzu de zonghe wei: %d\n", total);

    
    return 0;
}
