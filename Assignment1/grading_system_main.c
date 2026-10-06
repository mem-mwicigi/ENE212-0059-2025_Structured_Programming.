#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int marks;
    int reg_no;
    char name[50];
    char grade;
    printf("Enter the number of students, N: ");
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        printf("\n===Enter the details of the student %d===\n", i);
        printf("Registration Number: ");
        scanf("%d", &reg_no);
        printf("Name: ");
        scanf("%s", name);
        printf("Marks(0-100): ");
        scanf("%d", &marks);
        switch(marks){
            case 70 ... 100:
                grade = 'A';
                break;
            case 60 ... 69:
                grade = 'B';
                break;
            case 50 ... 59:
                grade = 'C';
                break;
            case 40 ... 49:
                grade = 'D';
                break;
            default:
                grade = 'F';
                break;
        }
        printf("\n------------------------------\n");
        printf("        STUDENT INFORMATION\n");
        printf("\n------------------------------\n");
        printf("Registration No: %d\n", reg_no);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);
        if (marks >= 40){
            printf("Status: Passed\n");
        }
        else{
            printf("Status: Failed\n");
        }
        printf("\n------------------------------\n");
    }
    return 0;
}

