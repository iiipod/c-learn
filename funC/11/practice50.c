/* practice50.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct friend{
        char name[30];
        char mobile[15];
        int year;
        int month;
        int day;
    };

    struct friend *pff;
    pff = (struct friend *)malloc(sizeof(struct friend));

    printf("qing shuru pengyou de xingming: ");
    scanf("%s", pff->name);

    printf("qing shuru pengyou de shouji hao: ");
    scanf("%s", pff->mobile);

    printf("qing shuru pengyou de shengri(yyyy-mm-dd): ");
    scanf("%d-%d-%d", &pff->year, &pff->month, &pff->day);

    printf("%s de shouji haoma shi %s\n", pff->name, pff->mobile);
    printf("%s de shengri shi(yyyy-mm-dd): %d-%d-%d\n", pff->name, pff->year, pff->month, pff->day);

    system("pause");
    return 0;
}
