/* array50.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num[5] = {10, 20, 30, 40, 50};
    int i, total = 0;

    printf("ci shuzu de shuju ruxia: \n");
    for(i = 0; i < 5; i++)
    {
        printf("num[%d]=%d\n", i, num[i]);
        total += num[i];
    }
    printf("\n\nzonghe wei: %d\n", total);
    
    return 0;
}
