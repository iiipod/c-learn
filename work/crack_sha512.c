#include<stdio.h>
#include<strings.h>
#include<shadow.h>

int main()
{
    struct spwd {
        char          *sp_namp; /* user login name */
        char          *sp_pwdp; /* encrypted password */
        long int      sp_lstchg; /* last password change */
        long int      sp_min; /* days until change allowed. */
        long int      sp_max; /* days before change required */
        long int      sp_warn; /* days warning for expiration */
        long int      sp_inact; /* days before account inactive */
        long int      sp_expire; /* date when account expires */
        unsigned long int  sp_flag; /* reserved for future use */
    };

    struct spwd test;
    int i;
    FILE *shadows;
    char lines[200];
    shadows = fopen("shadow", "r");

    while(!feof(shadows))
    {
        for(i<0; i<15;i++)
        {
         //   fscanf(shadows, "%s:%s:%ld:%ld:%ld:%ld:%ld:%ld:%lu", test.sp_namp, test.sp_pwdp, &test.sp_lstchg, &test.sp_min, &test.sp_max, &test.sp_warn, &test.sp_inact, &test.sp_expire, &test.sp_flag);
         //   printf("%s%s",test.sp_namp, test.sp_pwdp);
    // {
        fscanf(shadows, "%s", lines);
        // print 1st ":"
        printf("%p\n", index(lines,':'));
        // print 1st "$"
        printf("%p\n", index(lines, '$'));
        // print last "$"
        printf("%s\n", rindex(lines, '$') + 1);
        // print hello world
        printf("%s\n\n", "HELLO, World");
        }
    }
    fclose(shadows);
}

