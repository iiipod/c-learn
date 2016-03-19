/* practice90.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str2[3][20] = {"Fu-Jen", "Catholic", "University"};
    int i,j;

    printf("ci shuzu de shuju ruxia: \n");
    for(i = 0; i < 3; i++)
    {
        printf("%s\n", str2[i]);
    }

    system("pause");
    return 0;
}
