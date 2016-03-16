#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sum = 0, i;
    for(i = 1; i <= 100; i++)
    {
        sum += i;
    }
    printf("sum=%d\n", sum);
    printf("i dengyu %d\n", i);
    system("pause");
    return 0;
}
