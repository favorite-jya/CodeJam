#include <stdio.h>

char* foo(char *v)
{
    int len = strlen(v);
    char *c = malloc(len), *d = c;
    v += len;
    while (len--)
        *c++ = *v--;

    return d;
}

int main(int argc, char *argv)
{
    argc--, argv++;
    if(argc)
        printf("%s\n", foo(*argv));

    return 0;
}