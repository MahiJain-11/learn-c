#include <stdio.h>

int main()
{
    //spiral
    // int n , m;
    // printf("Enter the number of rows\n");
    // scanf("%d",&n);
    // printf("Enter the number of coloumns\n");
    // scanf("%d",&m);
    // int arr[n][m];
    // printf("Enter the elements\n");
    // for(int i=0 ; i<n ; i++){
    //     for(int j =0 ; j<m ; j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // printf("The matrix is\n");
    // for(int i=0 ; i<n ;i++){
    //     for(int j=0 ; j<m ; j++){
    //         printf(" %d",arr[i][j]);
    //     }
    // }
    // int top =0;
    // int bottom= m-1;
    // int left = 0;
    // int right = n-1;
    // while(top<=bottom && left<=right){
    //     //top
    //     for(int j = left ; j<= right; j++){
    //         printf(" %d",arr[top][j]);
    //     }
    //     top++;
    //     //right
    //     for(int i=top ; i<=bottom ; i++){
    //         printf(" %d",arr[i][right]);
    //     }
    //     right--;
    //     //bottom
    //     if (top<=bottom){
    //     for(int j= right ;j>= left; j-- ){
    //         printf(" %d",arr[bottom][j]);
    //     }
    //     bottom++;
    //     }
    //     //left
    //     if (left<=right){
    //     for(int i = bottom ; i>=top ; i--){
    //         printf(" %d",arr[i][left]);
    //     }
    //     left++;
    //     }
    // }
    
    //MATRIX MULTIPLICATION
    int arr[r1][c1];
    int brr[r2][c2];
    printf("enter the rows and coloumn of first matrix\n");
    scanf("%d %d",&r1 , &c1);
    printf("enter the rows and coloumn of second matrix\n");
    scanf("%d %d",&r2 , &c2);
    printf("Enter the elements of first matrix\n");
    for(int i =0; i<=r1 ; i++){
        for(int j=0 ; j<=c1;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i =0; i<r1 ; i++){
        for(int j=0 ; j<c1;j++){
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of second matrix\n");
    for(int i =0; i<r2 ; i++){
        for(int j=0 ; j<c2;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    for(int i =0; i<r1 ; i++){
        for(int j=0 ; j<c1;j++){
            printf(" %d",brr[i][j]);
        }
        printf("\n");
    }
    int crr[r1][c2];
    for(int i = 0 ; i<r1 ; i++){
        for(int j = )
    }
    return 0;
}