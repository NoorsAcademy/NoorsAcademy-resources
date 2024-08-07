/*
    Demo: Combining Operations in a For loop using the comma operator
*/

#include <stdio.h>

int main()
{
    for (int i = 1, j = 10; i <= 10, j >= 1; printf("i = %d, j = %d\n", i, j), i++, j--)
        ;

    return 0;
}