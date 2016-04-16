/* file20.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char name[30];
    int score;
    fptr = fopen("score10.dat", "r");
    while(fscanf(fptr, "%s %d", name, &score) != EOF)
    {
        printf("%s %d\n", name, score);
    }

    fclose(fptr);

    system("pause");
    return 0;
}
