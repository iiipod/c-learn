#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    double score;
    printf("qing shuru ni you duoshao qian: ");
    scanf("%d", &i);
    printf("wo muqian you %d yuan\n", i);
    printf("qing shuru fenshu: ");
    scanf("%lf", &score);
    printf("wo de C yuyan chengji shi %f fen\n", score);
    
    return 0;
}
