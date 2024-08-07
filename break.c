/*
    Demo: Example for break statement in a loop
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d ", i);
    }
    printf("Skipped printing the value 5.\n");
    return 0;
}