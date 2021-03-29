/* pointer40.c */
#include<stdio.h>
#include<stdlib.h>
void change();
int i = 100, j = 200;

int main()
{
    printf("wei dianyong change() hanshu qian: \n");
    printf("i=%d, j=%d\n\n", i, j);

    printf("dianyong change() hanshu hou: \n");
    change();
    printf("i=%d, j=%d\n", i, j);

    
    return 0;
}

void change()
{
    int temp;
    temp = i;
    i = j;
    j = temp;
}
