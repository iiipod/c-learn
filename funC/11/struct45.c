/* struct45.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct student{
        char name[30];
        int score;
    };

    struct student *pstu;
    pstu = (struct student *)malloc(sizeof(struct student));
    printf("qing shuru xuesheng xingming: ");
    scanf("%s", pstu->name);
    printf("qing shuru xuesheng chengji: ");
    scanf("%d", &pstu->score);

    printf("%s de chengji shi %d\n", pstu->name, pstu->score);

    system("pause");
    return 0;
}
