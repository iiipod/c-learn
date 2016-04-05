/* practice30.c */
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

    struct friend ff[3] = {{"Linda", "13800138000", 1988, 12, 12},
                {"Ali", "13800138001", 1988, 12, 13},
                {"Ad", "13800138002", 1988, 12, 14}};
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("%s de shouji haoma shi %s\n", ff[i].name, ff[i].mobile);
        printf("%s de shengri shi(yy-mm-dd): %d-%d-%d\n\n", ff[i].name, ff[i].year, ff[i].month, ff[i].day);
    }

    system("pause");
    return 0;
}
