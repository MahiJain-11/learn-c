
#include <stdio.h>
#include <string.h>
//Create a structure for a student with Roll Number, Name, Department, Course, 
//Year of Joining, create 2 structure variables, and write a function to check
//whether both students belong to the same department.

struct student {
    int roll_no;
    char name[50];
    char department[50];
    char course[50];
    int year;
};

void check_department(struct student s1, struct student s2)
{
    if (strcmp(s1.department, s2.department) == 0)
        printf("Both students belong to the same department.\n");
    else
        printf("Students belong to different departments.\n");
}

int main()
{
    struct student s1, s2;

    // Student 1
    printf("Enter details of student 1:\n");

    printf("Roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Name: ");
    scanf("%s", s1.name);

    printf("Department: ");
    scanf("%s", s1.department);

    printf("Course: ");
    scanf("%s", s1.course);

    printf("Year of joining: ");
    scanf("%d", &s1.year);


    // Student 2
    printf("\nEnter details of student 2:\n");

    printf("Roll number: ");
    scanf("%d", &s2.roll_no);

    printf("Name: ");
    scanf("%s", s2.name);

    printf("Department: ");
    scanf("%s", s2.department);

    printf("Course: ");
    scanf("%s", s2.course);

    printf("Year of joining: ");
    scanf("%d", &s2.year);


    // Function call
    check_department(s1, s2);

    return 0;
}