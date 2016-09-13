#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct spwd {
	char	*sp_namp;
	char	*sp_pwdp;
};

struct spwd test;

int main()
{
	FILE *shadows;
	shadows = fopen("shadow", "r");

	char buf0[512+1];
    char *result = NULL;
	char *delims = ":";

	while(!feof(shadows)){
        test.sp_namp = malloc(64);
        test.sp_pwdp = malloc(128);
		fgets(buf0, sizeof(buf0), shadows);

		if(buf0 == NULL) break;
        if(strlen(buf0)<8) break;
//		printf( "+++++buf0:%s \n", buf0 );
		result = strtok( buf0, delims );
//        printf( "result0 is: %s \n", result );
		strcpy(test.sp_namp, result);

		result = strtok( NULL, delims );
//        printf( "result1 is: %s \n", result );
		strcpy(test.sp_pwdp, result);


	//	if(strlen(test.sp_pwdp) < 2) continue;
    //	if(test.sp_pwdp[0] != '$') continue;
	//	result = strtok( NULL, delims );
//        if(strlen(test.sp_pwdp) > 10)
  //      {
            printf("user:hash=%s:%s\n", test.sp_namp, test.sp_pwdp);
    //    }

        free(test.sp_namp);
        free(test.sp_pwdp);
	}

	return 0;
}
