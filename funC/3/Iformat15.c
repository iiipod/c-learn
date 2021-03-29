#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 12345;
    printf("|%d|\n", i);
    printf("|%8d|\n", i);
    printf("|%-8d|\n", i);
    printf("|%3d|\n", i);
    
    return 0;
}
