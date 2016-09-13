#include<stdio.h>
#include<crypt.h>

int main()
{
    char hash[200] = "$6$V/LSzAJF6vF$9ACVCPuVOpXBdSKPy5c4YtoaPq.meooEHtuExTLFrIMc/M8.jI4bU/Oo9e1xpAsgR/.CfiMuv7B9RllUECJ0u.";
    char user_name[10] = "root";
    char password[20] = "password";
    int i;
    char salt[21] = "$6$V/LSzAJF6vF";
    sprintf(salt, "$6$%s$", password);
    printf("%s\n", crypt((char *) argv[1], (char *) salt));
    return;
}

