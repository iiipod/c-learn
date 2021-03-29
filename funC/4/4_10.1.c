#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 0, j = 0, sum;
    double avg;
    printf("please input a number:");
    scanf("%d", &i);
    printf("please input another number:");
    scanf("%d", &j);
    sum = i + j;
    avg = sum / 2.0;
    printf("sum = %d, avg=%.1f\n", sum, avg);
    
    return 0;
}
