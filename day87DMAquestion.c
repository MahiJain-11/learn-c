#include <stdio.h>
#include <stdlib.h>
int main()
{
//realloc memory---> resize memory 
//time complexirty ---> O(1) or O(n)
// Suppose the user first wants 5 numbers.
// Later they want 10.
// Instead of creating new memory manually, use realloc().  

// syntax
// int *ptr;
// ptr = (int*)realloc(ptr,n*sizeof(int));

// int *ptr;
// ptr = (int*)malloc(5*sizeof(int));
// for(int i = 0 ; i<5; i++){
//     ptr[i]=i+1;
// }
// ptr = (int*)realloc(ptr,20*sizeof(int));
// for(int i = 5 ; i<20 ; i++)
// ptr[i]= i+1;

// for(int i=0 ; i<20 ; i++){
// printf("%d ",ptr[i]);
// }
// free (ptr);

//free() --->A memory leak happens when allocated memory is never freed.
// Why does malloc() return void *?
// malloc() doesn't know what type of data you'll store.
// So it returns a generic pointer (void *), which can be converted to any pointer type.

//question 1 -->Create a dynamic array of 5 integers using malloc(), store 
//10, 20, 30, 40, 50, print them, and then free the memory.
// int *ptr;
// ptr = (int*)malloc(5*sizeof(int));
// for(int i = 0 ; i <5 ; i++)
//     ptr[i]= (i+1)*10;
// for(int i = 0 ; i<5; i++){
// printf("%d ",ptr[i]);
// }
// free(ptr);

//question 2 --->Use calloc() to create an array of n integers, take n numbers 
//from the user, and print their sum
// int n;
// int *ptr;
// int sum = 0;
// printf("enter n \n");
// scanf("%d",&n);
// ptr = (int*)calloc(n,sizeof(int));

// printf("enter %d numbers\n",n);
// for(int i = 0 ; i<n ; i++){
//   scanf("%d", &ptr[i]);
// sum = sum +ptr[i];
// }

// printf(" sum = %d ",sum);
// free(ptr);

    return 0;
}