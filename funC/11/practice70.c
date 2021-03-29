/* practice70.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct student{
        char name[30];
        char mobileNumber[16];
        struct student *next;
    };

    struct student *p, *q, *current;
    p = (struct student *)malloc(sizeof(struct student));
    printf("qing shuru xuesheng xingming: ");
    scanf("%s", p->name);
    printf("qing shuru xuesheng shouji haoma: ");
    scanf("%s", p->mobileNumber);
    p->next = NULL;

    q = (struct student *)malloc(sizeof(struct student));
    printf("\nqing shuru xuesheng xingming: ");
    scanf("%s", q->name);
    printf("qing shuru xuesheng shouji haoma: ");
    scanf("%s", q->mobileNumber);
    q->next = NULL;

    q->next = p;
    printf("\n");

    current = q;
    while(current != NULL)
    {
        printf("%-16s de shouji haoma shi %10s\n", current->name, current->mobileNumber);
        current = current->next;
    }

    
    return 0;
}
