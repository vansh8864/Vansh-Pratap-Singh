#include <stdio.h>
#include <string.h>
#define MAX 100
// Structure to store student details
struct Student
{
    int roll;
    char name[50];
    int age;
    float marks;
};
struct Student s[MAX];
int count = 0;
// Function to add a student
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[count].roll);
    printf("Enter Name: ");
    scanf(" %[^\n]", s[count].name);
    printf("Enter Age: ");
    scanf("%d", &s[count].age);
    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);
    count++;
    printf("\nStudent Added Successfully!\n");
}
// Function to display all students
void displayStudents()
{
    if (count == 0)
    {
        printf("\nNo Student Records Found!\n");
        return;
    }
    printf("\n----- Student Records -----\n");
    for (int i = 0; i < count; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", s[i].roll);
        printf("Name    : %s\n", s[i].name);
        printf("Age     : %d\n", s[i].age);
        printf("Marks   : %.2f\n", s[i].marks);
    }
}
// Function to search a student
void searchStudent()
{
    int roll, found = 0;
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
        {
            printf("\nStudent Found!\n");
            printf("Roll No : %d\n", s[i].roll);
            printf("Name    : %s\n", s[i].name);
            printf("Age     : %d\n", s[i].age);
            printf("Marks   : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("\nStudent Not Found!\n");
}
// Function to update marks
void updateMarks()
{
    int roll;
    float marks;
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
        {
            printf("Enter New Marks: ");
            scanf("%f", &marks);
            s[i].marks = marks;
            printf("\nMarks Updated Successfully!\n");
            return;
        }
    }
    printf("\nStudent Not Found!\n");
}
// Function to delete a student
void deleteStudent()
{
    int roll;
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
        {
            for (int j = i; j < count - 1; j++)
            {
                s[j] = s[j + 1];
            }
            count--;
            printf("\nStudent Deleted Successfully!\n");
            return;
        }
    }
    printf("\nStudent Not Found!\n");
}
// Function to find topper
void topper()
{
    if (count == 0)
    {
        printf("\nNo Student Records Found!\n");
        return;
    }
    int index = 0;
    for (int i = 1; i < count; i++)
    {
        if (s[i].marks > s[index].marks)
            index = i;
    }
    printf("\n----- Topper Details -----\n");
    printf("Roll No : %d\n", s[index].roll);
    printf("Name    : %s\n", s[index].name);
    printf("Marks   : %.2f\n", s[index].marks);
}
int main()
{
    int choice;
    do
    {
        printf("\n====== STUDENT MANAGEMENT SYSTEM ======\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Show Topper\n");
        printf("7. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateMarks();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                topper();
                break;
            case 7:
                printf("\nThank You!\n");
                break;
            default:
                printf("\nInvalid Choice!\n");
        }
    } while (choice != 7);
    return 0;
}