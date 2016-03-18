/* array10.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, num[5];
    for(i = 0; i < 5; i++)
    {
        printf("qing shuru shuzu di #%d ge shu: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("\nci shuzu de shuju ruxia: \n");
    for(i = 0; i < 5; i++)
    {
        printf("num[%d]=%d\n", i, num[i]);
    }
    system("pause");
    return 0;
}
