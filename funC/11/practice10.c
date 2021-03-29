/* practice10.c */
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

    struct friend ff;
    printf("qing shuru pengyou de xingming: ");
    scanf("%s", ff.name);
    printf("qing shuru pengyou de shouji haoma: ");
    scanf("%s", ff.mobile);
    printf("qing shuru pengyou de shengrii(yyyy-mm-dd): ");
    scanf("%d-%d-%d", &ff.year, &ff.month, &ff.day);
    printf("\n");

    printf("%s de shouji haoma shi %s\n", ff.name, ff.mobile);
    printf("%s de shengri shi(yy-mm-dd): %d-%d-%d\n", ff.name, ff.year, ff.month, ff.day);

    
    return 0;
}
