
#include <stdio.h>

int main()
{
//bubble sort  --->compare adjacent elements and swap them if they're in the wrong order.
//basically it continues to send the larger element to right untill sorted in ascending order
//time complexity ----> O(n^2) ; space complexity---> O(1)
// for example
// 5,2,6,4
// when i=0
// 1st comparison between 5 and 2 as 5 is larger it will shift to right 2,5,6,4
// then 5 and 6 comparision 6>5 so it have to shift to right but as it 
// already there hence no change 2,5,6,4 then 6 and 4 comaprision 6>4 it will shift to right
// 2,5,4,6 as the sequence ends now i become 1
// now i = 1
// again 2 and 5 comaprision no change ; 5 >4 hence 4 will come forward 2,4,5,6 
// now 5<6 so no change again and now it is sorted 2,4,5,6
//SYNTEX 1
// int arr[]= {4,11,6,3,5,8,9,1,10};
// int n = 9;
// for(int i = 0 ; i < n-1 ; i++){
//     for(int j = 0 ; j < n-i-1;j++){
//         if(arr[j]>arr[j+1]){
//             int temp = arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1] = temp;
//         }
//     }
// }
// for(int i=0;i<n;i++){
//     printf("%d, ",arr[i]);
// }
//SELECTION SORTING ---> Find the smallest element and place it at the beginning.
//Instead of many swaps, it performs only one swap per pass.
// find smallest , and swap with first element
// Selection sort always makes exactly:
// n(n−1)/2
// comparisons.
//time complexity = O(n^2); space complexity = O(1)

// int arr[]= {4,11,6,3,5,8,9,1,10};
// int n = 9;
// for(int i = 0 ; i < n-1 ; i++){
//     int min = i;
//     for(int j=i+1 ; j <n ; j++){
//         if (arr[j]< arr[min]){
//             min = j;
//         }
//     }
//     int temp = arr[i];
//     arr[i] = arr[min];
//     arr[min] = temp;
// }
// for(int i = 0 ; i<n ; i++){
//     printf("%d, ",arr[i]);
// }

//INSERTION SORTING ...DOUBT
//Time complexity = O(n^2) space complexity = O(1)
//  int arr[]={5,3,8,4,2};
//     int n=5;

//     for(int i=1;i<n;i++) {

//         int key=arr[i];
//         int j=i-1;

//         while(j>=0 && arr[j]>key) {
//             arr[j+1]=arr[j];
//             j--;
//         }

//         arr[j+1]=key;
//     }

//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
// }
    return 0;
}