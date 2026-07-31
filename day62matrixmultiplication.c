#include <stdio.h>

// int main()
// {
    //multiply the two matrix
//     int a,b,c,d;
//     printf("enter the row and coloumn respectively of first matrix \n");
//     scanf(" %d %d",&a ,&b);
//     printf("enter the row and coloumn respectively of second matrix\n");
//     scanf(" %d %d",&c ,&d);
//     int arr[a][b];
//     int brr[c][d];
//     printf("Enter elements of first matrix:\n");
//     for (int i = 0; i < a; i++) {
//         for (int j = 0; j < b; j++) {
//             scanf("%d", &arr[i][j]);
//         }  
//     }    
//     printf("Enter elements of second matrix:\n");
//     for (int i = 0; i < c; i++) {
//         for (int j = 0; j < d; j++) {
//             scanf("%d", &brr[i][j]);
//         }
//     }        
//     printf("THE FIRST MATRIX IS\n");
//     for(int i = 0 ; i < a ; i++){
//         for(int j = 0 ; j< b ; j++){
//             printf(" %d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("THE SECOND MATRIX IS\n");
//     for(int i = 0 ; i < c ; i++){
//         for(int j = 0 ; j< d ; j++){
//             printf(" %d",brr[i][j]);
//         }
//         printf("\n");
//     }    
//     //MULTIPLICATION
//     int crr[a][d];
//     for(int i = 0 ; i<a ;i++){
//         for(int j = 0 ; j<d; j++){
//             crr[i][j]=0;
//            // 0 se intialize kia kuki phle se a aur d ki value bhar dega iseliye
//         }
//     }
//     //matrix MULTIPLICATION
//     for (int i = 0; i < a; i++) {
//         for (int j = 0; j < d; j++) {
//             for (int k = 0; k < b; k++) {
//                 crr[i][j] += arr[i][k] * brr[k][j];
//             }
//         }
//     }
//     //print result
//     printf("\nProduct Matrix is\n");
//     for (int i = 0; i < a; i++) {
//         for (int j = 0; j < d; j++) {
//             printf("%d ", crr[i][j]);
//         }
//         printf("\n");
//     }
// ye ek example hai
//  for(int i=0;i<3;i++){
//     for(int j=0;j<4;j++){
//         for(int k=0;k<2;k++){
//             printf("i=%d j=%d k=%d\n",i,j,k);
//         }
//     }
// }
//     return 0;
// }