/* switch10.c */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int grade;
    printf("qing shuru nin de daihao(1, 2, 3): ");
    scanf("%d", &grade);
    switch(grade)
    {
        case 1: printf("nin shi benke sheng\n");
            break;
        case 2: printf("nin shi shuoshi sheng\n");
            break;
        case 3: printf("nin shi boshi sheng\n");
            break;
        default:
            printf("nin shi jinxiu sheng\n");
    }
    system("pause");
    return 0;
}
