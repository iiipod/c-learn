/* practice40.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    double money;
    fptr = fopen("practice30.dat", "r");

    while(fscanf(fptr, "%lf", &money) != EOF)
    {
        printf("%f\n", money);
    }

    fclose(fptr);

    
    return 0;
}
