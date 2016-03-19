/* practice70.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j, k;
    double num[2][3][4] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10, 11.11, 12.12, 13.13, 14.14, 15.15, 16.16, 17.17, 18.18, 19.19, 20.20, 21.21, 22.22, 23.23, 24.24};
    double total = 0.0;

    printf("ci shuzu de shuju ruxia: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 4; k++)
            {
                printf("num[%d][%d][%d]=%.2f\n", i, j, k, num[i][j][k]);
                total += num[i][j][k];
            }
        }
    }
    printf("\nci shuzu de zonghe wei: %.2f\n", total);

    system("pause");
    return 0;
}
