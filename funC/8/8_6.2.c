#include<stdio.h>
#include<stdlib.h>
int main()
{
    double num[5], sum = 0.0;
    int i;

    for(i = 0; i <5; i++)
    {
        printf("qing shuru di #%d ge yuansu de zhi: ", i + 1);
        scanf("%lf", &num[i]);
    }

    printf("\n");

    for(i = 0; i < 5; i++)
    {
        printf("ci shuzu di %d ge yuanse de zhi wei: %.2f\n", i, num[i]);
        sum += num[i];
    }
    printf("suoyou yuansu zhi de he wei: %.2f\n", sum);

    system("pause");
    return 0;
}
