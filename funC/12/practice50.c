/* practice50.c */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    FILE *fptr;
    char name[20];
    double money;
    fptr = fopen("practice50.dat", "w");
    printf("shuru xingming shi ruguo wei none, chengxu jiang jieshu...\n\n");
    printf("qing shuru ni de xingming he lingyongqian: ");
    scanf("%s %lf", name, &money);

    while(strcmp(name, "none"))
    {
        fprintf(fptr, "%s %f ", name, money);
        printf("qing shuru ni de xingming he lingyongqian: ");
        scanf("%s %lf", name, &money);
    }

    fclose(fptr);

    system("pause");
    return 0;
}
