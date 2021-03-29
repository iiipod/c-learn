#include<stdio.h>
#include<stdlib.h>
int main()
{
    double a = 123.456;
    printf("|%f|\n", a);
    printf("|%8.2f|\n", a);
    printf("|%-8.2f|\n", a);
    printf("|%5.2f|\n", a);
    printf("|%.2f|\n", a);
    
    return 0;
}
