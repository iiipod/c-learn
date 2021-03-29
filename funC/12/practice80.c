/* practice80.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char ch;
    fptr = fopen("test.dat", "r");

    while(fscanf(fptr, "%c", &ch) != EOF)
    {
        printf("%c\n", ch);
    }

    fclose(fptr);

    
    return 0;
}
