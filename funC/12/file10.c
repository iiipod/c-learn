/* file10.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char name[30];
    int score;
    fptr = fopen("score10.dat", "w");
    printf("shuru de chengji ruguo shi 0,chengxu jiang jieshu...\n\n");
    printf("qing shuru xingming: ");
    scanf("%s", name);
    printf("qing shuru chengji: ");
    scanf("%d", &score);

    while(score != 0)
    {
        fprintf(fptr, "%s %d", name, score);
        printf("qing shuru xingming: ");
        scanf("%s", name);
        printf("qing shuru chengji: ");
        scanf("%d", &score);
    }

    fclose(fptr);

    
    return 0;
}
