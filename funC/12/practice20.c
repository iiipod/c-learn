/* practice20.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char name[30];
    char mobile[10];
    double money;
    fptr = fopen("practice10.dat", "r");

    while(fscanf(fptr, "%s %s", name, mobile) != EOF)
    {
        printf("%s %s\n", name, mobile);
    }

    fclose(fptr);

    system("pause");
    return 0;
}
