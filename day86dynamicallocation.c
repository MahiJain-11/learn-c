#include <stdio.h>
#include <stdlib.h>
int main()
{
    //dynamic memory allocation
// Dynamic allocation = memory runtime par decide aur allocate hoti hai.
// Matlab program chal raha hai aur tab decide kiya ki kitni memory chahiye.
// it must be removed manually . it has flexible size.
//example int n;

//static memory allocation
// Static allocation = memory pehle se fixed hoti hai.
// memory is decided before execution . size fixed hoti hai . it is automatically removed
// for example arr[100] now 100 boxes are reserved even if you write 10 array still 100
// boxes are reserved so static memory allocation are stored in stack

//stack Vs Heap
// Stack is fast and automatically managed.
// Heap is larger but you must manage it yourself.

//operations for dynamic allocation
// malloc() , calloc() ----> to intialize memory / allocate memory in Heap
// realloc() ---> resize memory / to change the amount of memory allocated
// free() ---> to release the memory / to dellocate the memory
// * to use all this you must include #include <stdlib.h>

// 1) malloc (memory allocation)
//syntax = 
//int *ptr;
// ptr = (int*/char*/float*)malloc(n*sizeof(int/char/float))

// int *ptr;
// ptr = (int*)malloc(8 * sizeof(int));
// for(int i=0;i<8;i++){
//     ptr[i]=i+1;
// }
// for(int i =0 ; i<8 ;i++){
//     printf("%d",ptr[i]);
// }
// free(ptr);

//question--> Write a C program to dynamically allocate memory for n integers
//using malloc(), take input, and print the array.
// int *ptr;
// int n;
// printf("enter n\n");
// scanf("%d",&n);
// ptr = (int*)malloc(n*sizeof(int));
// for(int i = 0 ;i<n ; i++){
//     ptr[i] = i+1;
// }
// for(int i= 0 ; i<n ; i++){
//     printf("%d  ", ptr[i]);
// }
// free(ptr);

//calloc() contiguous allocation
//syntax
// int ptr*;
// ptr = (int*/char*/float*)calloc(n,sizeof(int/char/float));

//quetion 2 ---> 
//Write a C program to dynamically allocate memory for n integers using calloc()
//and print the initially stored values.
// int *ptr ;
// ptr= (int*)calloc(3,sizeof(int));
//     for(int i = 0 ; i<3 ; i++){
//     printf("%d ",ptr[i]);
//  }
// free(ptr);

//question 3 ---> Create a dynamic array of 5 integers using malloc(), store 
//10, 20, 30, 40, 50, print them, and then free the memory.

// int *ptr;
// ptr = (int*)malloc(5*sizeof(int));
// for(int i = 0; i<5;i++){
//     ptr[i]=(i+1)*10;
// }
// for(int i = 0 ; i<5; i++){
//     printf("%d ",ptr[i]);
// }
// free(ptr);

//Use calloc() to create an array of n integers, take n numbers from the 
//user, and print their sum
// int *ptr;
// int n;
// int sum=0;
// printf("enter n\n");
// scanf("%d",&n);
// ptr = (int*)calloc(n,sizeof(int));
// for(int i = 0 ; i<n ; i++){
//     sum = sum + ptr[i];
//     printf("%d", sum);
// }
// free(ptr);
    return 0;
}
