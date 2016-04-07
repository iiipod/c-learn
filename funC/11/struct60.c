/* struct60.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct student{
        char name[30];
        int score;
        struct student *next;
    };

    struct student *p, *q, *current;
    p = (struct student *)malloc(sizeof(struct student));
    printf("qing shuru xuesheng xingming: ");
    scanf("%s", p->name);
    printf("qing shuru xuesheng chengji: ");
    scanf("%d", &p->score);
    p->next = NULL;

    q = (struct student *)malloc(sizeof(struct student));
    printf("\nqing shuru xuesheng xingming: ");
    scanf("%s", q->name);
    printf("qing shuru xuesheng chengji: ");
    scanf("%d", &q->score);
    q->next = NULL;
    p->next = q;
    printf("\n");

    current = p;
    while(current != NULL)
    {
        printf("%s de chengji shi %d\n", current->name, current->score);
        current = current->next;
    }

    system("pause");
    return 0;
}
