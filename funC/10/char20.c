/* char20.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    printf("nin yaobuyao qu riben shang yinghua(y/n): ");
    scanf("%c", &ch);
    if(ch == 'y')
        printf("rang women yiqi fun riben\n");
    else
        printf("mingyian zai shuo ba!!!\n");

    
    return 0;
}
