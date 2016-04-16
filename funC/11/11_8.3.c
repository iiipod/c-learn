#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct student{
        char name[20];
        double score;
        double records;
        struct student *next;
    };

    struct student *p, *q, *r, *current;
    p = (struct student *)malloc(sizeof(struct student));
    printf("qing shuru xuesheng xingming: ");
    scanf("%s", p->name);

    printf("qing shuru C de chengji: ");
    scanf("%lf", &p->score);

    printf("qing shuru jilu de chengji: ");
    scanf("%lf", &p->records);

    printf("\n");

    p->next = NULL;

    q = (struct student *)malloc(sizeof(struct student));
    printf("qing shuru xuesheng xingming: ");
    scanf("%s", q->name);

    printf("qing shuru C de chengji: ");
    scanf("%lf", &q->score);

    printf("qing shuru jilu de chengji: ");
    scanf("%lf", &q->records);
    q->next = NULL;
    p->next = q;

    printf("\n");

    r = (struct student *)malloc(sizeof(struct student));
    printf("qing shuru xuesheng xingming: ");
    scanf("%s", r->name);

    printf("qing shuru C de chengji: ");
    scanf("%lf", &r->score);

    printf("qing shuru jilu de chengji: ");
    scanf("%lf", &r->records);
    r->next = NULL;
    q->next = r;

    printf("\n");

    current = p;
    while(current != NULL)
    {
        printf("%s de C yu jilu de chengji ru xia: %.2f, %.2f\n", current->name, current->score, current->records);
        current = current->next;
    }
    system("pause");
    return 0;
}
