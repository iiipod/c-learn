#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct student{
        char name[20];
        double score;
        double records;
    };

    struct student ff;
    printf("qing shuru xuesheng xingming: ");
    scanf("%s", ff.name);

    printf("qing shuru C yuyan de chengji: ");
    scanf("%lf", &ff.score);

    printf("qing shuru jilu de chengji: ");
    scanf("%lf", &ff.records);

    printf("\n");

    printf("%s de C yu jilu de chengji ru xia: %.2f, %.2f\n", ff.name, ff.score, ff.records);

    
    return 0;
}
