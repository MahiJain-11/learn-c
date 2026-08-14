#include <stdio.h>
//example of nested structure
// struct student{
//     int rollnumb;
//     char name[100];
//     int age;
// };
// struct address{
//     char city[50];
//     char state[50];
//     struct student stud;
// };

// question 2
struct date{
    char day[50];
    int month;
    int year;
};
struct student{
    char name[100];
    int rollnum;
    struct date dob;
};
struct college{
    char collegename[100];
    char city[50];
    struct student stu;
};

int main()
{
// //palindrome practice
// char str[100];
// int i = 0;
// int j = 0;
// printf("enter string\n");
// scanf("%s",str);
//  while(str[j] != '\0'){
//     j++; 
//  }
//  j--;
//  while(i<j){
//     if(str[i] != str[j]){
//     printf(" not palindrome\n");
//     return 0;
//     }
//     i++;
//     j--;
//  }
//  printf("palindrome\n");

//NESTING OF STRUCTURES
//one structure is declared as a member of another structure
//example
// struct structure1{
//     // members
// };
// struct structure2{
//     // members
//     struct structure1 variable;
// };
//example 1
// struct address s1 = {
//     "bhopal",
//     "madhya pradesh",
//     {101,"rahul",18}
// };
// printf("%s\n",s1.stud.name);
// printf("%s\n",s1.city);
// printf("%s\n", s1.state);
// printf("%d\n",s1.stud.rollnumb); //stud is nested in s1
// printf("%d\n",s1.stud.age);

// question 2 ---> Create the following nested structures: take input from user
// date → day, month, year
// student → name, rollno, and a nested date structure called dob
// college → collegeName, city, and a nested student structure
// struct college c1 ={
//     "nit trichy",
//     "trichy",
//     {"mahi",121,
//     {"monday",12 , 2007}}
// };
// printf("college name = %s\n",c1.collegename);
// printf("city = %s\n",c1.city);
// printf("student name = %s\n",c1.stu.name);
// printf("roll number = %d\n",c1.stu.rollnum);
// printf("day of birth = %s\n",c1.stu.dob.day);
// printf("month of birth = %d\n",c1.stu.dob.month);
// printf("year of birth = %d\n",c1.stu.dob.year);


    return 0;
}