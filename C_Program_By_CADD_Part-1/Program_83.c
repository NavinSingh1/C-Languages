// void pointers

#include <stdio.h>
#include <conio.h>
int main()
{
    void *ptr = NULL;
    int *p = NULL;
    char *cp = NULL;
    float *fp = NULL;
    printf("Size of void pointers=%d\n", sizeof(ptr));
    printf("Size of integer pointers=%d\n", sizeof(p));
    printf("Size of charachter pointers=%d\n", sizeof(cp));
    printf("Size of float pointers=%d\n", sizeof(fp));

    return 0;
}