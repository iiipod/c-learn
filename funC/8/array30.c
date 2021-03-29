/* array30.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, num[5] = {10, 20, 30};

    printf("ci shuzu de shuju ruxia: \n");
    for(i = 0; i < 5; i++)
    {
        printf("num[%d]=%d\n", i, num[i]);
    }
    
    return 0;
}
