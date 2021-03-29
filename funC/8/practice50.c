/* practice50.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j;
    double sum = 0.0;
    double num[2][3] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};

    printf("ci shuzu de shuju ruxia: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("num[%d][%d]=%.2f\n", i, j, num[i][j]);
            sum += num[i][j];
        }
    }
    printf("\nci shuzu de zonghe wei: %.2f\n", sum);

    
    return 0;
}
