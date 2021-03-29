/* practice40.c */
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

    struct friend ff = {"Linda", "13800138000", 1988, 12, 12};
    struct friend *pff = &ff;

    printf("%s de shouji haoma shi %s\n", ff.name, ff.mobile);
    printf("%s de shengri shi(yyyy-mm-dd): %d-%d-%d\n", ff.name, ff.year, ff.month, ff.day);

    printf("%s de shouji haoma shi %s\n", pff->name, pff->mobile);
    printf("%s de shengri shi(yyyy-mm-dd): %d-%d-%d\n", pff->name, pff->year, pff->month, pff->day);

    
    return 0;
}
