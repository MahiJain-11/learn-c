#include <stdio.h>
#include <math.h>
// int factorial(int x){
//     int f=1;
//     for(int i=1;i<=x;i++){
//     f = f*i;
//     }
//     return f;
// }

// armstrong 
// int armstrong(int n){
//     int dup = n;
//     int sum = 0;
//     int p;
//     while (dup>0){
//         p = dup %10;
//         sum = sum + pow(p,3);
//         dup = dup/10;
//     }
//     if (sum == n)
//     return 1;
//     else 
//     return 0 ;
// }
void primefactor(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
          printf("%d ", i);
        }
    }
}
int main()
{
    //pascal's triangle
    // int n;
    // printf("enter the number of rows\n");
    // scanf("%d",&n);
    // for (int i=0 ;i<=n;i++){
    //     for (int j = 0;j<=i;j++){
    //         printf("%d",factorial(i)/(factorial(j)*factorial(i-j)));
    //     }
    //   printf(" \n");
    // }
    
    //armstrong number 
    // int num;
    // printf("enter the number:\n");
    // scanf("%d",&num);
    // if (armstrong(num)){
    //     printf("%d is armstrong number\n",num);
    // }
    // else{
    //     printf("%d is not a armstrong number",num);
    // }
    
    //DOUBLE POINTER
    // int a = 5;
    // int *x = &a;
    // *x = 3; // a is changed
    // printf("%d",a);
    
    //A pointer stores the address of a variable.
    //A double pointer stores the address of another pointer. 
    // int x = 10;
    // int *p = &x;     // Pointer
    // int **pp = &p;// Double pointer
    // printf("%d\n", x);  
    // printf("%d\n", *p);  
    // printf("%p\n",&*p);
    // printf("%d\n", **pp); 
    // printf("%p\n",&**pp);
    
    // QUESTION  a positive number is entered . write a function to obtain
    //the prime factor of the number
    // int n;
    // printf("Enter a positive number: ");
    // scanf("%d", &n);
    // if(n <= 0){
    //     printf("Invalid input");
    // }
    // else
    // printf("Prime factors are: ");
    // primefactor(n);
    return 0;
}