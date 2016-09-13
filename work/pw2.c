#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct spwd {
	char	sp_namp;
	char	sp_pwdp;
    char    others;
};

struct spwd test;

int main()
{
	FILE *shadows;
	shadows = fopen("shadow", "r");
	char buf[512+1];

	while(!feof(shadows)){
        fscanf(shadows, "%s:%s:%s", &test.sp_namp, &test.sp_pwdp, &test.others);
        printf("%s%s\n", test.sp_namp, test.sp_pwdp);

	}

	return 0;
}
