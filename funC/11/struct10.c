/* struct10.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct student{
        char name[30];
        int score;
    };

    struct student stu;
    printf("qing shuru xuesheng xingming: ");
    scanf("%s", stu.name);
    printf("qing shuru xuesheng chengji: ");
    scanf("%d", &stu.score);

    printf("%s de chengji shi %d\n", stu.name, stu.score);

    system("pause");
    return 0;
}
