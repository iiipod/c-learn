/* practice10.c */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fptr;
    char name[30];
    char mobile[10];
    fptr = fopen("practice10.dat", "w");
    printf("shuru de shouji haoma ruguo shi none, chengxu jiang jieshu...\n\n");
    printf("qing shuru xingming: ");
    scanf("%s", name);
    printf("qing shuru shouji haoma: ");
    scanf("%s", mobile);

    while(strcmp(mobile, "none") != 0)
    {
        fprintf(fptr, "%s %s ", name, mobile);
        printf("qing shuru xingming: ");
        scanf("%s", name);
        printf("qing shuru shouji haoma: ");
        scanf("%s", mobile);
    }

    fclose(fptr);

    
    return 0;
}
