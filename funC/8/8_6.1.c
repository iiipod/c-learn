#include<stdio.h>
#include<stdlib.h>
int main()
{
    double num[5];
    int i;

    for(i = 0; i <5; i++)
    {
        printf("qing shuru di #%d ge yuansu de zhi: ", i + 1);
        scanf("%lf", &num[i]);
    }

    for(i = 0; i < 5; i++)
    {
        printf("ci shuzu di %d ge yuanse de zhi wei: %.2f\n", i, num[i]);
    }

    system("pause");
    return 0;
}
