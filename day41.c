#include <stdio.h>
// int factorial(int x){
//     int fact = 1;
//     for (int i = 2 ;  i<=x ; i++){
//         fact = fact*i;
//     }
//     return fact;
// }

int main()
{
    // Combination and permutation
    //method 1 without using functions
    // int n;
    // int r;
    // int ncr;
    // printf("enter n\n");
    // scanf("%d",&n);
    // printf("enter r\n");
    // scanf("%d",&r);
    // int nfact = 1; //n!
    // int rfact = 1; //r!
    // int nrfact =1; //n-r!
    
    // for (int i=2;i<=n;i++){
    //     nfact= nfact*i;
    // }
    // for (int i; i<=r;i++ ){
    //     rfact= rfact*i;
    // }
    // for (int i=2;i<=(n-r);i++){
    //     nrfact= nrfact*i;
    // } 
    // ncr = nfact/(rfact* nrfact); // n! / r!(n-r)!
    // printf(" Ans is %d",ncr);
    
    // method 2 with using functions
    // int n;
    // int r;
    // int ncr;
    // printf("enter n\n");
    // scanf("%d",&n);
    // printf("enter r\n");
    // scanf("%d",&r);
    // ncr = factorial(n)/(factorial(r)*factorial(n-r));
    // printf("%d",ncr);
    
    
    // print the value of i from it's pointer to pointer
    // int i = 4;
    // int *ptr = &i;
    // int **pptr = &ptr;
    // printf("%d\n",**pptr);
        return 0;
}