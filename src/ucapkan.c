#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ucapkan(char m[])
{
    size_t panjang = strlen(m);
    if (panjang > 0)
    {
        printf("Ucapkan: %s\r\n", m);
    }
}

void caraguna(char **arg)
{
    printf("Cara guna: %s \"ucapan\"\n", arg[0]);
}

int main(int argc, char *argv[])
{
	if (argc < 2) {
		caraguna(argv);
		return -1;
	}    

    int i;
    int strsaiz = 0;
    for (i=1; i<argc; i++) {
        strsaiz += strlen(argv[i]);
        if (argc > i+1)
            strsaiz++;
    }

    printf("Saiz: %d\n", strsaiz);

    char *ucapan;
    ucapan = malloc(strsaiz);
    ucapan[0] = '\0';

    for (i=1; i<argc; i++) {
        strcat(ucapan, argv[i]);
        if (argc > i+1)
            strcat(ucapan, " ");
    }

    ucapkan(ucapan);
    return 1;
}