/* practice60.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char name[20];
    double money;
    fptr = fopen("practice50.dat", "r");

    while(fscanf(fptr, "%s %lf", name, &money) != EOF)
    {
        printf("%15s de lingyongqian you  %.2f\n", name, money);
    }

    fclose(fptr);

    
    return 0;
}
