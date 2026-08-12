#include <stdio.h>
#include <string.h>
int main()
{
// copying one structure to another    
// typedef struct student{
//     char name[50];
//     int age;
//     float height;
//     float marks;
// } student;
// student a,b,c;
// strcpy(a.name,"mahi");
// a.age = 14;
// a.height = 170.69;
// a.marks= 98.29;

// b.age = a.age;
// b.marks = a.marks;
// b.height = a.height;
// strcpy(b.name,a.name);

// printf("%d\n",a.age);
// printf("%.2f\n",a.marks);
// printf("%.2f\n",a.height);
// printf("%s\n\n",a.name);

// printf("%d\n",b.age);
// printf("%.2f\n",b.marks);
// printf("%.2f\n",b.height);
// printf("%s\n",b.name);

//beside this i can also do
// c = a; //deep copy
// printf("Details of c are\n");
// printf("%s\n",c.name);
// printf("%d\n",c.age);
// printf("%.2f\n",c.marks);
// printf("%.2f\n",c.height);

//QUESTION ---> create a struture 'data' that contains three memebers namely date 
//month and year. Create two structure variable with two different dates and 
//now compare both if dates are equal than display message equal otherwise
//unequal

// typedef struct data{
//     int date;
//     int month;
//     int year;
// }data;
// data case1,case2;
// printf("Enter data for the first day\n");
// printf("date =");
// scanf("%d",&case1.date);
// printf("month = ");
// scanf("%d",&case1.month);
// printf("year =");
// scanf("%d",&case1.year);

// printf("Your entered data for day1 is = %d / %d/ %d",case1.date , case1.month, case1.year);

// printf("\n\nEnter data for the second day\n");
// printf("date = ");
// scanf("%d",&case2.date);
// printf("month = ");
// scanf("%d",&case2.month);
// printf("year = ");
// scanf("%d",&case2.year);

// printf("Your entered data for day1 is = %d / %d/ %d",case2.date , case2.month, case2.year);

// if(case1.date == case2.date &&
//   case1.month == case2.month &&
//   case1.year == case2.year){
//     printf("\nequal");
// }
// else{
//     printf("\nunequal");
// }
    return 0;
}