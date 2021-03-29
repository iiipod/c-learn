#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char name[20];
    double score;
    double record;
    fptr = fopen("name.dat", "r");
    printf("xingming\tC fenshu\tjilu fenshu\n");
    while(fscanf(fptr, "%s %lf %lf", name, &score, &record) != EOF)
    {
        printf("%s\t\t%.2f,\t\t%.2f\n", name, score, record);
    }

    fclose(fptr);

    
    return 0;
}
