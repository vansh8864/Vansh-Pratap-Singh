#include <stdio.h>
int main() {
    int n, i;
    // Arrays to store student details
    int roll[50];
    char name[50][50];
    float marks[50];
    // Input the number of students
    printf("Enter number of students: ");
    scanf("%d", &n);
    // Input student records
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);
        // Input roll number
        printf("Roll No: ");
        scanf("%d", &roll[i]);
        // Input student name
        printf("Name: ");
        scanf("%s", name[i]);
        // Input marks
        printf("Marks: ");
        scanf("%f", &marks[i]);
    }
    // Display all student records
    printf("\n========== Student Records ==========\n");
    printf("Roll No\tName\t\tMarks\n");
    printf("-------------------------------------\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\n", roll[i], name[i], marks[i]);
    }
    return 0;
}