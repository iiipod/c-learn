#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sum = 0, i = 1;
    do {
    sum += i;
    i++;
    }while(i <= 100);
    printf("sum=%d\n", sum);
    printf("i dengyu %d\n", i);
    system("pause");
    return 0;
}
