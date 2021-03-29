/* array2-40.c */
/* another way */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str2[][15] = {"Department", "of", "Information", "Management"};
    int i, j;

    printf("ci shuzu de shuju ruxia: \n");
    for(i = 0; i < 4; i++)
    {
        printf("%s\n", str2[i]);
    }
    
    return 0;
}
