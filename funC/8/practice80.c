/* practice80.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[] = "Linux CN";
    int i;

    printf("ci shuzu de shuju ruxia: \n");
    printf("%s\n", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}
