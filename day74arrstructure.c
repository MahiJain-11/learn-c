#include <stdio.h>
#include <string.h>
struct student{
  char name[40];
  int age;
  float marks;
};

int main()
{
//structure elements are stored in continous pattern or continous memory 
//location.
//typdedeff
//typedef ka use kisi existing data type ko ek naya naam dene ke liye hota hai.
// typedef int number;
// number age = 18; // here number is new name for int
// printf("%d",age); 
//------------------------------------------------------------------------
//ARRAY OF structure ...
//so basically instead of writting struct student s1 , struct student s2 etc for 
//multiple inputs we can use ARRAY like this
//struct student s[3]
//for example to enter details of 4 students
// struct student s[4];
// puts("Enter details of 4 students");
// for(int i = 0 ; i < 4; i++){
//     printf("enter name\n");
//     scanf("%s",s[i].name); // character mai no & only in int and float need &
    
//     printf("enter age\n");
//     scanf("%d",&s[i].age);
    
//     printf("enter marks\n");
//     scanf("%f",&s[i].marks);
// }
// puts("details of students are");
// for(int i = 0; i<4; i++){
//     printf("name = %s\n",s[i].name);
//     printf("age = %d\n",s[i].age);
//     printf("marks = %.2f\n",s[i].marks);
// }
//----------------------------------------------------------------------------

    return 0;
}