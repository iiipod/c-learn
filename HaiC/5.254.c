# include<stdio.h>
typedef union {
    float weight;
    int count;
} cupcake;

int main()
{
/*    cupcake order = {.count=2}; */
    cupcake order = {2}; 
/*    cupcake order = {1.1}; */
    printf("Cupcaks quantity: %i\n", order.count);
    return 0;
}
