/* file20-2.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;

    char name[80];
    fptr = fopen("name.dat", "r");
    while(fscanf(fptr, "%s", name) != EOF)
    {
        printf("%s\n", name);
    }

    fclose(fptr);

    system("pause");
    return 0;
}
