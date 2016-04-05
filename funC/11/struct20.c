/* struct20.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct student{
        char name[30];
        int score;
    };

    struct student stu = {"Peter", 89};
    printf("%s de chengji shi %d\n", stu.name, stu.score);

    system("pause");
    return 0;
}
