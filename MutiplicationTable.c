/*
    Demo: Generating Mutiplication Table using For loop
*/

#include <stdio.h>

int main()
{
    int num;
    // prompt user to enter a number
    printf("Enter a number to generate its mutiplication table: ");
    scanf("%d", &num);

    // Generate the mutiplication table

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", i, num, num * i);
    }

    return 0;
}
