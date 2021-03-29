/* file10-1.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;

    int score;
    fptr = fopen("score10-1.dat", "w");
    printf("shuru de chengji ruguo shi 0,chengxu jiang jieshu...\n\n");
    printf("qing shuru chengji: ");
    scanf("%d", &score);
    while(score != 0)
    {
        fprintf(fptr, "%d ",score);
        printf("qing shuru chengji: ");
        scanf("%d", &score);
    }

    fclose(fptr);

    
    return 0;
}
