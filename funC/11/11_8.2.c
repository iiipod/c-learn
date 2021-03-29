#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct student{
        char name[20];
        double score;
        double records;
    };

    struct student ff[3];
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("qing shuru di %d wei tongxue de xingming: ", i + 1);
        scanf("%s", ff[i].name);

        printf("qing shuru di %d wei tongxue de C yuyan chengji: ", i + 1);
        scanf("%lf", &ff[i].score);

        printf("qing shuru di %d wei tongxue de jilu de chengji: ", i + 1);
        scanf("%lf", &ff[i].records);

        printf("\n");
    }

    for(i = 0; i < 3; i++)
    {
        printf("%s de C yu jilu de chengji ru xia: %.2f, %.2f\n", ff[i].name, ff[i].score, ff[i].records);
    }
    
    return 0;
}
