/*
    Demo: Selection / Decision Making Statements
*/

#include <stdio.h>

int main()
{
    int no;
    printf("Enter any number: ");
    scanf("%d", &no);

    if (no > 0)
    {
        printf("The number is positive\n");
    }
    else if (no < 0)
    {
        printf("The number is negative\n");
    }
    else
    {
        printf("The number is zero\n");
    }

    return 0;
}