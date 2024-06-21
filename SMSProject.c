/*
    Project: Student Management System
*/
#include <stdio.h>

int main()
{
    int addStudent;
    int choice;

    printf("\nStudent Management System\n");
    printf("*****************************\n");
    printf("\t\tMENU\n");
    printf("*****************************\n");
    printf("1. Add a student\n");
    printf("2. Display all students\n");
    printf("3. Search for a student\n");
    printf("4. Update student details\n");
    printf("5. Delete a student\n");
    printf("6. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Add a student selected!\n");
        // implement adding a student functionality
        break;
    case 2:
        printf("Display all student selected!\n");
        // implement display all students functionality
        break;
    case 3:
        printf("Search for a student selected!\n");
        // implement searching for  a student functionality
        break;
    case 4:
        printf("update student details selected!\n");
        // implement updating student details functionality
        break;
    case 5:
        printf("delete a student selected!\n");
        // implement deleting a student functionality
        break;
    case 6:
        printf("Exiting...\n");
        break;
    default:
        printf("Invalid Input\n");
        }

    printf("Do you want to add a student? (1 for Yes, 0 for No): ");
    scanf("%d", &addStudent);

    if (addStudent == 1)
    {
        printf("Student added!\n");
    }
    else
    {
        if (addStudent == 0)
        {
            printf("No student added.\n");
        }
        else
        {
            printf("Invalid input.\n");
        }
    }
    return 0;
}