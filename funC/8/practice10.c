/* practice10.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    double num[5];
    for(i = 0; i < 5; i++)
    {
        printf("qing shuru shuzu di #%d ge fudian shu: ", i + 1);
        scanf("%lf", &num[i]);
    }

    printf("\nci shuzu de shuju ruxia: \n");
    for(i = 0; i < 5; i++)
    {
        printf("num[%d]=%.2f\n", i, num[i]);
    }

    system("pause");
    return 0;
}
