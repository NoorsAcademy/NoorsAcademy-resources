/*
    Demo: User input validation using a do-while loop.
          This program repeatedly prompts the user
          to enter a positive integer until they provide
          a valid input.
*/

#include <stdio.h>

int main()
{
    int num;
    do
    {
        printf("Enter a positive interger: ");
        scanf("%d", &num);

        if (num <= 0)
        {
            printf("Invalid input. Please try again.\n");
        }

    } while (num <= 0);

    printf("You entered a valid positive integer: %d\n", num);

    return 0;
}