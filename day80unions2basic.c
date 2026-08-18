
#include <stdio.h>
#include <string.h>
// union student{
//     int roll;
//     char name[50];
//     float marks;
// };

//QUESTION 2
union student {
    int roll;
    float marks ;
    char grade;
};

int main()
{
//Unions
//A union is a user-defined data type, just like a structure, 
//but all members share the same memory location.
//Structure → separate memory
//Union → shared memory
// union student s;
// s.roll = 2404;
// printf("Roll number = %d\n",s.roll);
// strcpy(s.name , "mahi");
// printf("name = %s\n",s.name);
// s.marks = 98.45;
// printf("marks = %.2f",s.marks);

//QUESTION 2
//Create a union named student containing:
//roll number , marks , grade
//Take input from the user
union student s ;
puts("ENTER ROLL NUMBER");
scanf("%d",&s.roll);
puts("\nENTER MARKS");
scanf("%f",&s.marks);
puts("\nENTER GRADE");
scanf("%c",&s.grade);
printf("marks = %.2f\n",s.marks);
printf("roll number = %d\n",s.roll);
printf(" GRADE = %c",s.grade);
    return 0;
}