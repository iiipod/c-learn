#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sum =0, i = 1;
    while(i < 100)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
        i++;
    }
    printf("sum=%d\n", sum);
    printf("i dengyu %d\n", i);
    
    return 0;
}
