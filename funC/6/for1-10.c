/* for1-10.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j;
    for(i = 1; i <= 3; i++)
    {
        printf("xianzai i dengyu %d\n", i);
        for(j = 1; j <= 9; j++)
        {
            printf("... j pao di %d ci\n", j);
        }
    }
    
    return 0;
}
