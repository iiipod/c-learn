/* file10-2.c */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fptr;
    char name[80];

    fptr = fopen("name.dat", "w");
    printf("shuru quit jiang jieshu...\n");
    printf("qing shuru xingming: ");
    scanf("%s", name);
    while(strcmp(name, "quit") != 0)
    {
        fprintf(fptr, "%s ", name);
        printf("qing shuru xingming: ");
        scanf("%s", name);
    }

    fclose(fptr);

    system("pause");
    return 0;
}
