/* struct40.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct student{
        char name[30];
        int score;
    };

    struct student stu = {"Peter", 89};
    struct student *pstu = &stu;
    printf("&stu=%x, stu.name=%x\n", &stu, stu.name);
    printf("pstu=%x, pstu->name=%x\n", pstu, pstu->name);

    printf("%s de chengji shi %d\n", stu.name, stu.score);
    printf("%s de chengji shi %d\n", pstu->name, pstu->score);

    
    return 0;
}
