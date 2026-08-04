#include <stdio.h>

int main()
{
    // char arr[]={'H','E','L','L','O','m','a','h','i','\0'};
    // int i = 0;
    // while(arr[i] != '\0'){
    // printf("%c",arr[i]);
    // i++;
    // }
    //method 2 of creating an array 
    // char arr[]="hello mahi\0";//\0 naa bhi lgye toh bhi code will run but upar 
    // int i = 0;                // wle mai code will not run if \0 not there
    // while(arr[i] != '\0'){
    //     printf("%c",arr[i]);
    //     i++;
    // }
    
    //WAYS of printing particular element
    // arr[i] , *(arr+i) , *(i+arr) , i[arr]
    // char arr[]="hello mahi\0";
    // int i = 0;                
    // while(arr[i] != '\0'){
    //     printf("%c",i[arr]);
    //     i++;
    // }
    // char str[9]="hellomahi\0";
    // str[1]= 'b';
    // int i = 0;                
    // while(str[i] != '\0'){
    //     printf("%c",str[i]);
    //     i++;
    // } 
    //input and output of strings without loops fgets() scanf  and puts() printf
    //puts() string ko print krta hai
    // char arr[]="hello mahi";
    // puts(arr);
    //printf vs puts()
    //Dono same print karte hain, lekin puts() print ke baad 
    //automatically next line (\n) mein chala jata hai.
    //gets() string input leta hai
    // char name[20];

    // printf("Enter your name: ");
    // fgets(name, sizeof(name), stdin);

    // printf("Your name is: ");
    // puts(name);
    
    
    return 0;
}