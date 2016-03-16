/* doWhile30.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 'A';
    do
    {
        printf("%3c\n", i);
        i++;
    }while(i <= 'H');
    system("pause");
    return 0;
}
