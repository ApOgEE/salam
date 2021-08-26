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

int main()
{
    char ucapan[16] = "Salam Sejahtera";
    ucapkan(ucapan);
    return 1;
}