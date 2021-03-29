/* struct35.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct student{
        char name[30];
        int score;
    };

    struct student stu[5];
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("qing shuru di %d wei tongxue de xingming: ", i + 1);
        scanf("%s", stu[i].name);
        printf("qing shuru di %d wei tongxue de fengshu: ", i + 1);
        scanf("%d", &stu[i].score);
        printf("\n");
    }

    for(i = 0; i < 5; i++)
    {
        printf("%15s de fenshu shi %3d fen\n", stu[i].name, stu[i].score);
    }

    
    return 0;
}
