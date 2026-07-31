#include <stdio.h>
int fact(int x){
    int f= 1;
    for (int i = 1 ; i<=x ; i++)
    f = f*i;
    return f;
}

int main()
{
    //PASCAL'S TRIANGLE 
//         1  // 0C0
//       1   1 // 2C0 =1 1C1 = 1
//     1   2   1 // 1C0 = 1 2C1 = 2 2C2  = 1
//   1   3   3   1  //3C0 = 1 , 3C1 = 3 , 3C2 = 3 ,  3C3 = 1
// 1   4   6   4   1//  4C0 = 1 4C2=4 4C3 = 6
// First and last number are always 1
// Middle numbers come from addition of the two numbers above them.
// We can also generate each number using Combination (nCr)
// METHOD 1 = using FACTORIAL
    // int n;
    // printf("enter number of rows:\n");
    // scanf("%d",&n);
    // for (int i = 0 ; i<=n ; i++){
    //     for (int j =0 ; j<=i; j++){
    //         printf("%d",fact(i)/(fact(j)*fact(i-j)));
    //     }
    //     printf(" \n");
    // }
    
    // METHOD 2 USING LOOPS
    
    // int n;

    // printf("Enter number of rows: ");
    // scanf("%d",&n);

    // for(int i=0;i<n;i++)
    // {
    //     int num=1;

    //     for(int space=0;space<n-i-1;space++)
    //     {
    //         printf(" ");
    //     }

    //     for(int j=0;j<=i;j++)
    //     {
    //         printf("%d ",num);

    //         num=num*(i-j)/(j+1);
    //     }

    //     printf("\n");
    // }

    return 0;
}