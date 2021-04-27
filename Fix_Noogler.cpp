#include <stdio.h>
#include <string.h>
#include <malloc.h>

char* foo(char* v)
{
    int len = strlen(v);
    char* c = (char*)malloc(len+1);
    char* d = c;

    v += len-1;
    while (len--)
        *c++ = *v--;
    *c = '\0';

    return d;
}

int main(int argc, char *argv[])
{
    argc--;

    if (argc)
       printf("%s\n", foo(argv[1]));

    return 0;
}
