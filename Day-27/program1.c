#include <stdio.h>
// Student details
struct Student
{
    int rollNo;
    char name[50];
    float marks;
};
int main()
{
    struct Student s[100];
    int n = 0, choice, i, roll, found;
    do
    {
        // Display menu
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            // Add student record
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].rollNo);
                printf("Enter Name: ");
                scanf(" %[^\n]", s[n].name);
                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);
                n++;
                printf("\nRecord Added Successfully!\n");
                break;
            // Display all records
            case 2:
                if(n == 0)
                {
                    printf("\nNo Records Available.\n");
                }
                else
                {
                    printf("\n----- Student Records -----\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nRoll No : %d", s[i].rollNo);
                        printf("\nName    : %s", s[i].name);
                        printf("\nMarks   : %.2f\n", s[i].marks);
                    }
                }
                break;
            // Search by roll number
            case 3:
                printf("Enter Roll Number: ");
                scanf("%d", &roll);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(s[i].rollNo == roll)
                    {
                        printf("\nStudent Found!\n");
                        printf("Roll No : %d\n", s[i].rollNo);
                        printf("Name    : %s\n", s[i].name);
                        printf("Marks   : %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("\nStudent Record Not Found.\n");
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