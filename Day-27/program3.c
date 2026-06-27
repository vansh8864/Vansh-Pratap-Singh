#include <stdio.h>
// Store employee salary details
struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, grossSalary;
};
int main()
{
    struct Employee emp[100];
    int n = 0, choice, i;
    // Menu-driven program
    do
    {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            // Add employee salary details
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[n].id);
                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp[n].name);
                printf("Enter Basic Salary: ");
                scanf("%f", &emp[n].basic);
                printf("Enter HRA: ");
                scanf("%f", &emp[n].hra);
                printf("Enter DA: ");
                scanf("%f", &emp[n].da);
                // Calculate Gross Salary
                emp[n].grossSalary = emp[n].basic + emp[n].hra + emp[n].da;
                n++; // Increase record count
                printf("\nSalary Record Added Successfully!\n");
                break;
            // Display all salary records
            case 2:
                if(n == 0)
                {
                    printf("\nNo Salary Records Available.\n");
                }
                else
                {
                    printf("\n----- Salary Records -----\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nEmployee ID : %d", emp[i].id);
                        printf("\nName         : %s", emp[i].name);
                        printf("\nBasic Salary : %.2f", emp[i].basic);
                        printf("\nHRA          : %.2f", emp[i].hra);
                        printf("\nDA           : %.2f", emp[i].da);
                        printf("\nGross Salary : %.2f\n", emp[i].grossSalary);
                    }
                }
                break;
            // Exit the program
            case 3:
                printf("\nExiting Program...\n");
                break;
            // Invalid menu choice
            default:
                printf("\nInvalid Choice!\n");
        }
    } while(choice != 3);
    return 0;
}