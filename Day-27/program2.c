#include <stdio.h>
// Employee details
struct Employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct Employee emp[100];
    int n = 0, choice, i, id, found;
    do
    {
        // Menu
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            // Add employee
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[n].id);
                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp[n].name);
                printf("Enter Salary: ");
                scanf("%f", &emp[n].salary);
                n++;
                printf("\nEmployee Added Successfully!\n");
                break;
            // Display employees
            case 2:
                if(n == 0)
                {
                    printf("\nNo Employee Records Available.\n");
                }
                else
                {
                    printf("\n----- Employee Records -----\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nEmployee ID : %d", emp[i].id);
                        printf("\nName        : %s", emp[i].name);
                        printf("\nSalary      : %.2f\n", emp[i].salary);
                    }
                }
                break;
            // Search employee
            case 3:
                printf("Enter Employee ID: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == id)
                    {
                        printf("\nEmployee Found!\n");
                        printf("Employee ID : %d\n", emp[i].id);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Salary      : %.2f\n", emp[i].salary);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("\nEmployee Record Not Found.\n");
                break;
            case 4:
                printf("\nExiting Program...\n");
                break;
            default:
                printf("\nInvalid Choice!\n");
        }
    } while(choice != 4);
    return 0;
}