/* practice20.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    double num[5] = {11.1, 22.2, 33.3, 44.4};

    printf("ci shuzu de shuju ruxia: \n");
    for(i = 0; i < 5; i++)
    {
        printf("num[%d]=%.2f\n", i, num[i]);
    }

    system("pause");
    return 0;
}
