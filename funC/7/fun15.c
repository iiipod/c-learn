/* fun15.c */
#include<stdio.h>
#include<stdlib.h>
void func1();
void func2();
void printstar();

int main()
{
    printstar();
    printf("mama jiao wo da jiangyou\n");
    func1();
    printf("jiangyou da huilai le\n");

    printf("gege yaoqing wo da lanqiu\n");
    func2();
    printf("lanqiu da wan le\n");
    printstar();

    
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

void printstar()
{
    int i;
    for(i = 1; i <= 15; i++)
    {
        printf("*");
    }
    printf("\n");
}
