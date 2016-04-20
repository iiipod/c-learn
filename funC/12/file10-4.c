/* file10-4.c */
// 缓冲区问题 //
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char ch;

    fptr = fopen("stream.dat", "w");
    printf("qing shuru yige zifu(shuru $ shi jieshu): ");
    scanf("%c", &ch);
    while(ch != '$')
    {
        fprintf(fptr, "%c", ch);
        printf("qing shuru yige zifu(shuru $ shi jieshu): ");
        scanf("%c", &ch);
    }

    fclose(fptr);

    system("pause");
    return 0;
}
