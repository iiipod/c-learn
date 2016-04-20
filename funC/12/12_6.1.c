#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fptr;
    char name[20];
    double score;
    double record;
    fptr = fopen("name.dat", "w");
    printf("shuru quit jiang jieshu\n");
    printf("qing shuru xingming: ");
    scanf("%s", name);
    printf("qing shuru C yuyan chengji: ");
    scanf("%lf", &score);
    printf("qing shuru jilu fenshu: ");
    scanf("%lf", &record);
    printf("\n");

    while(strcmp(name, "quit") != 0)
    {
        fprintf(fptr, "%s %.2f %.2f ", name, score, record);
        printf("qing shuru xingming: ");
        scanf("%s", name);
        printf("qing shuru C yuyan chengji: ");
        scanf("%lf", &score);
        printf("qing shuru jilu fenshu: ");
        scanf("%lf", &record);
        printf("\n");
    }

    fclose(fptr);

    system("pause");
    return 0;
}
