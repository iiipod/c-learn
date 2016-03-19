/* practice30.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    double sum = 0.0;
    double num[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    printf("ci shuzu de shuju ruxia: \n");
    for(i = 0; i < 5; i++)
    {
        printf("num[%d]=%.2f\n", i, num[i]);
        sum += num[i];
    }
    printf("\nci shuzu de zonghe wei: %.2f\n", sum);

    system("pause");
    return 0;
}
