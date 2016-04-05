/* struct30.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct student{
        char name[30];
        int score;
    };

    struct student stu[2] = {"Peter", 89, "John", 90};
    printf("%s de chengji shi %3d\n", stu[0].name, stu[0].score);
    printf("%s de chengji shi %3d\n", stu[1].name, stu[1].score);

    system("pause");
    return 0;
}
