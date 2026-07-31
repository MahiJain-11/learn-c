#include <stdio.h>

int main()
{
    //2d array 
    //A 2D array (two-dimensional array) is an array of arrays.
    //It stores data in rows and columns, like a table or matrix.
    //HOW to intialize
    //int/ float / char arr _ name[r][c] basically (y,x)
    //[r] ----> are rows and [c]-----> coloumn
    //   int arr[3][4];
    // int arr[2][2];
    // arr[0][0] = 24;
    // arr[0][1] = 4;
    // arr[1][0] = 11;
    // arr[1][1] = 12;
    
    //OR METHOD 2
    // int arr[2][2]= {{1,2} ,{3,4}};
    // for(int i = 0 ; i<2 ; i++){
    //     for(int j = 0 ; j<2 ; j++){
    //         printf(" %d",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    //WAYS TO intialize
    //METHOD 1
    
    // int arr[4][2] = {
    //     {1234, 56},
    //     {1256, 43},
    //     {1434, 32},
    //     {1312, 96}
    // };

    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         printf(" %d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    
    //METHOD 2
    //  int arr[4][2] = {1234, 56, 1256, 43, 1434, 32, 1312, 96};
    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         printf(" %d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    
    //METHOD 3
    // int arr[2][3] = {
    //     {12, 34, 56},
    //     {78, 91, 23}
    // };
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         printf(" %d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    
    //METHOD 4
    //  int arr[][3] = {
    //     {12, 34, 56},
    //     {78, 91, 23}
    // };
    // int rows = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         printf(" %d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
} 