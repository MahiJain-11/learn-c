#include <stdio.h>

int main()
{
    //spiral / wave equation 1
    //input
    //1 2 3
    //4 5 6
    //7 8 9
    //output =
    //1 2 3 6 9 8 7 4 5
    //wave equation 2
    //output = 1 2 3 6 5 4 7 8 9
    //top row(0 se row-1) ----> right side(row -1 se col-1) ---->bottom 
    //row(col-1 se 0) ---> left (0 se row-1).
    //➡ Top Row
    // ⬇ Right Column
    // ⬅ Bottom Row
    // ⬆ Left Column
    int n , m;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    printf("enter the number of coloumn\n");
    scanf("%d",&m);
    int arr[n][m];
    printf("enter the elements of matrix\n");
    for(int i = 0 ; i <n ; i++){
        for (int j = 0 ; j<m ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nthe original matrix is\n");
    for(int i = 0 ; i <n ; i++){
        for (int j = 0 ; j<m ; j++){
            printf(" %d",arr[i][j]);
        }
        printf(" \n");
    }
    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = m-1;
    
    printf("The sequence due to spiraled matrix is\n ");
    while (top<=bottom && left <= right){
        //top 
        //row fix hota hai col change hoti hai 
        for(int j = left ; j <=right ; j++){
            printf(" %d",arr[top][j]);
        }
        top++;
        //right coloumn
        for(int i = top ; i<= bottom ; i++){
            printf(" %d",arr[i][right]);
        }
        right--;
        //bottom
        if (top <= bottom){
            for(int j = right ; j>= left ; j--){
                printf(" %d",arr[bottom][j]);
        }
        bottom --;
        } 
        //left 
        if(left<= right){
            for(int i = bottom ; i >=  top ; i--){
                printf(" %d",arr[i][left]);
            }
            left++;
        }
    }
    return 0;
}