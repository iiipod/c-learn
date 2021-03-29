/* practice20.c */
# include<stdio.h>
# include<stdlib.h>
void change(double, double);

int main()
{
    double i = 11.11, j = 22.22;

    printf("zai wei diaoyong change() hanshu qian: \n");
    printf("i=%.2f, j=%.2f\n\n", i, j);

    printf("diaoyong change() hanshu hou: \n");
    change(i, j);
    printf("i=%.2f, j=%.2f\n\n", i, j);

    
    return 0;
}

void change(double x, double y)
{
    double temp;
    temp = x;
    x = y;
    y = temp;
}

