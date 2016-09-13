#include<stdio.h>

int main()
{
    FILE *shadows;
    char lines[200];
    shadows = fopen("shadow", "r");
    while (fscanf(shadows, "%s", lines) != EOF)
        printf("%s\n",lines);
    fclose(shadows);
}
