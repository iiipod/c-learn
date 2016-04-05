/* practice20.c */
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

    printf("%s de shouji haoma shi %s\n", ff.name, ff.mobile);
    printf("%s de shengri shi(yy-mm-dd): %d-%d-%d\n", ff.name, ff.year, ff.month, ff.day);

    system("pause");
    return 0;
}
