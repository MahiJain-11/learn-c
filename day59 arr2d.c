#include <stdio.h>

int main()
{
    //addressing an 2d array
    // int arr[3][4] = {{04,01,02,03},{10,11,12,13},{20,21,22,23}};
    // printf("The matrix is\n");
    // for (int i = 0 ; i<3 ; i++){
    //     for(int j = 0 ; j<4 ; j++){
    //         printf(" %d",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // arr[2][1] = (2*4 +1)*sizeof(arr)/sizeof(arr[0]);
    // printf("%d is the address of 21",arr);
    
    //WAP to find the row number having the maximum sum in a given matrix
    // int arr[3][4] = {{04,01,02,03},{10,11,12,13},{20,21,22,23}};
    // int maxsum = 0 ;
    // int row = 0;
    // for (int i = 0 ; i<3; i++){
    //     int sum=0;
    //     for (int j = 0 ; j<4 ; j++){
    //         sum = sum + arr[i][j];
    //     }
    //     if (sum >maxsum){
    //         maxsum = sum;
    //         row = i;
    //     }
    // }
    // printf("max sum is %d\n",maxsum);
    // printf("row number is %d\n",row);
    
    //given a matrix having 0 and 1 only,find the row with maximum number of rows
    // int arr[3][4] = {{0,01,0,01},{1,1,1,0},{0,1,0,0}};
    // printf("The matrix is\n");
    // for (int i = 0 ; i<3 ; i++){
    //     for(int j = 0 ; j<4 ; j++){
    //         printf(" %d",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // int row = 0 ;
    // int maxone=0;
    // for(int i = 0 ; i<3 ; i++){
    //     int one = 0;
    //     for(int j = 0 ; j<4 ; j++){
    //         if(arr[i][j] == 1){
    //             one++;
    //         }
    //     }
    //     printf("\nrow: %d\ncount of one:%d\n",i+1,one);
        
    //     if (one> maxone ){
    //         maxone = one;
    //         row = i;
    //     }
    // }
    // printf("\nRow with maximum number of 1 is  = %d", row + 1);
    
    
    return 0;
}