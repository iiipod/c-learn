/* fun40.c */
#include<stdio.h>
#include<stdlib.h>
void printstar(int);
int sum(int, int);

int main()
{
    int i, j, k, total;
    printf("qing shuru nin yao duoshao ge xingxing: ");
    scanf("%d", &k);
    printstar(k);
    printf("qing shuru i de zhi: ");
    scanf("%d", &i);
    printf("qing shuru j de zhi: ");
    scanf("%d", &j);
    total = sum(i, j);
    printf("zong he wei: %d\n", total);
    printstar(k);
    system("pause");
    return 0;
}

void printstar(int n)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        printf("*");
    }
    printf("\n");
}

int sum(int x, int y)
{
    int tot;
    tot = x + y;
    return tot;
}
