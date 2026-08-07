#include <stdio.h>
#include<string.h>
int main()
{
    //BULLITIN FUNCTION OF STRINGS
    //STRINGS FUNCTION(YE sab c++ mai jyda use honge)
    //strlen(char*str)  return the length of STRINGS
    //strcpy(char*s1,char*s2)  copies the content od string s2 to string s1
    //strcat(char*s1,char*s2)concat(joining) s1 string with s2 and stores the result in s1
    //strcmp(char*s1,char*s2)copares the two string
    //strncpy(char*s2 , char*s1,int len) copy substring of size len startng from
    //s1 character pointer into s2.
    
    //reverse the string
    // char str[100];
    // puts("enter first string: ");
    // fgets(str,100,stdin);
    // int k = 0;
    // int size=0;
    // while(str[k] !=  '\0'){
    //     k++;
    //     size++;
    // }
    // for(int i=0,j=size-1;i<=j;i++,j--){
    //     char temp = str[i];
    //     str[i] = str[j];
    //     str[j] = temp;
    // }
    // puts("The reverse of string is\n");
    // puts(str);
    
    //strlen 
    // char* str = "mahijain";
    // int x = strlen(str);
    // printf("%d",x);
    
    //strcpy
    // char *s1 = "mahi";
    // char s2[12]; // Character array
    // strcpy(s2, s1);
    // printf("%s", s2);
    //example
    //     char *days[] = {
    //     "Mon",
    //     "Tue",
    //     "Wed",
    //     "Thu",
    //     "Fri"
    //   };
    //   printf("%s", days[0]);

    //strcat  syntax --> strcat(destination, source);
    //destination → the string where the second string will be added.
    // source → the string to append.
    // char s1[100] = "Hello";
    // char s2[] = "Mahi";
    // strcat(s1,s2);
    // printf("%s",s1);
    
    // strcpy → copy
    // strcat → join
    // strlen → length
    // strcmp → compare
    
    //WHEN TO PUT * AND WHEN NOT TO?
    //Rule 1: * in a declaration means "this is a pointer"
    // char *p; → p is a pointer to a char
    // int *x; → x is a pointer to an int
    // float *f; → f is a pointer to a float
    //Rule 2: No * means it's a normal variable
    //These store actual values, not addresses.
    //Rule 3: Arrays NEVER need * in their declaration
    return 0;
}