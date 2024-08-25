/*
    Demo: Find the sum of given numbers using while loop
*/

#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter numbers to sum (Enter a negative number to stop):");

    while (1)
    {
        scanf("%d", &num);
        if (num < 0)
        {
            break;
        }
        sum = sum + num;
    }

    printf("The sum of the entered numbers is: %d\n", sum);
}