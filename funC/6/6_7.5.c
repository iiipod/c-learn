#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sum = 0, i = 1;
    for(i = 1; i <= 100; i++)
    {
        if(i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("sum=%d\n", sum);
    printf("i dengyu %d\n", i);
    
    return 0;
}
