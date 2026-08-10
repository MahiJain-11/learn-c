#include <stdio.h>
#include<string.h>
// queston 1
// struct student 
// {
//     char name[30];
//     int age;
//     float marks;
// };
//question 2
// struct book
// {
//     char name[30];
//     float price;
//     int pages;
// };
//question 3
struct student 
{
    char name[30];
    int age;
    float marks;
};

int main()
{   
    // puts("marks out of 50 are:-");
    // struct student s1 = {"Mahi", 17,45.5};
    // printf("Name = %s\n", s1.name);
    // printf("Age = %d\n", s1.age);
    // printf("Marks = %.2f\n", s1.marks);
    // struct student s2 = {"Khushi",18,40.5};
    // printf("name = %s\n",s2.name);
    // printf("printf=%d\n",s2.age);
    // printf("marks = %.2f\n",s2.marks);
    //ARRAY VS STRUCTURE
    //what sould be preffered to store 10 float in memory? ARRAY
    
    
    //QUESTION 2 create a structure type 'book' with name, price , and no. of 
    //pages as it's attributes
    // struct book b1 = {"rich dad poor dad",405.32,220};
    // printf("Name of the book is :%s\n",b1.name);
    // printf("price= %.2f\n",b1.price);
    // printf("no.of pages = %d\n\n",b1.pages);
    // struct book b2 = {"Think and grow rich",120.92,108};
    // printf("Name of the book is :%s\n",b2.name);
    // printf("price= %.2f\n",b2.price);
    // printf("no.of pages = %d\n\n",b2.pages);
    // struct book b3 = {"Ikigai",115.34,200};
    // printf("Name of the book is :%s\n",b3.name);
    // printf("price= %.2f\n",b3.price);
    // printf("no.of pages = %d\n",b3.pages);
    
    //OBJECTS AND CLASS
    //Object = actual thing
    //when we create struct s1... s1 is the object
    //Represents one student
    //Contains actual values
    
    //class = blueprint
    //when we create 
    // struct student 
    // {
    //     char name[30];
    //     int age;
    //     float marks;
    // };
    //name age mark are class
    //Doesn't represent one specific student
    //Defines properties/functions
    
    // question 3 - How to take structure from the user
    // struct student s1;

    // printf("Enter name: ");
    // scanf("%s", &s1.name);

    // printf("Enter age: ");
    // scanf("%d", &s1.age);

    // printf("Enter marks: ");
    // scanf("%f", &s1.marks);

    // printf("\nName = %s\n", s1.name);
    // printf("Age = %d\n", s1.age);
    // printf("Marks = %.2f\n", s1.marks);
    return 0;
}