/* localGlobal40.c */
#include<stdio.h>
#include<stdlib.h>
void printstar(int);
void input();
void process();
void output();
int i, j, total;

int main()
{
    printstar(20);
    input();
    process();
    output();
    printstar(20);
    
    return 0;
}

void input()
{
    printf("qing shuru i de zhi: ");
    scanf("%d", &i);
    printf("qing shuru j de zhi: ");
    scanf("%d", &j);
}

void process()
{
    total = i + j;
}

void output()
{
    printf("zhonghe wei: %d\n", total);
}

void printstar(int n)
{
    int i;
    for(i = 1; i <=n; i++)
    {
        printf("*");
    }
    printf("\n");
}
