/* practice30.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    double money;
    fptr = fopen("practice30.dat", "w");
    printf("shuru de lingyongqian ruguo shi 0, chengxu jiang jieshu...\n\n");
    printf("qing shuru ni de lingyongqian: ");
    scanf("%lf", &money);

    while(money != 0)
    {
        fprintf(fptr, "%f ", money);
        printf("qing shuru ni de lingyongqian: ");
        scanf("%lf", &money);
    }

    fclose(fptr);

    
    return 0;
}
