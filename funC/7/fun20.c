/* fun20.c */
#include<stdio.h>
#include<stdlib.h>
void func1();
void func2();
void printstar(int);

int main()
{
    printstar(20);
    printf("mama jiao wo da jiangyou\n");
    func1();
    printf("jiangyou da huilai le\n");

    printf("gege yaoqing wo da lanqiu\n");
    func2();
    printf("lanqiu da wan le\n");
    printstar(20);

    system("pause");
    return 0;
}

void func1()
{
    printf("wo xianzai zhengzai da jiangyou ...\n");
}

void func2()
{
    printf("wo xianzai zhengzai da lanqiu ...\n");
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
