/* file10-5.c */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char ch;

    fptr = fopen("stream.dat", "w");
    printf("qing shuru yige zifu(shuru $ shi jieshu): ");
//    ch = getche();
    ch = getchar();
    while(ch != '$')
    {
        fprintf(fptr, "%c", ch);
        printf("qing shuru yige zifu(shuru $ shi jieshu): ");
//        ch = getche();
        ch = getchar();
    }

    fclose(fptr);

    
    return 0;
}
