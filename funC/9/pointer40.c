/* pointer40.c */
#include<stdio.h>
#include<stdlib.h>
void change();

int main()
{
    int i = 100, j = 200;

    printf("wei dianyong change() hanshu qian: \n");
    printf("i=%d, j=%d\n\n", i, j);

    printf("dianyong change() hanshu hou: \n");
    change(i, j);
    printf("i=%d, j=%d\n", i, j);

    
    return 0;
}

void change(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
