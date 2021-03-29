/* file20-1.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;

    int score;
    fptr = fopen("score10-1.dat", "r");
    while(fscanf(fptr, "%d", &score) != EOF)
    {
        printf("%d\n", score);
    }

    fclose(fptr);

    
    return 0;
}
