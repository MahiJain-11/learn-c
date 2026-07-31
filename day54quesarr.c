#include <stdio.h>
// void  reverse(int arr[],int a , int b){
//     while (a<b){
//         int temp = arr[a];
//         arr[a]=arr[b];
//         arr[b]=temp;
//         a++;
//         b--;
//     }
//-----------------------------------------------------------------------------

int main()
{
    //  LEARN  rotate the given array by K steps 
    
    //to reversee the whole array
    // int arr[7]={1,2,3,4,5,6,7};
    // int brr[7]={7,6,5,4,3,2,1};
    // for(int i = 0 ; i<7 ; i++){
    //     brr[i] = arr[6-i];
    // }
    // for (int i =0 ; i<7; i++){
    //     printf(" %d", brr[i]);
    // }
//------------------------------------------------------------------------------    
    //Now to reverse a part of an array
    // int arr[7]={1,2,3,4,5,6,7};
    // index 1-4 reverse
    // for (int i=1,j = 4; i<=j ; i++,j--){
    //     int temp = arr[i];
    //     arr[i]= arr[j];
    //     arr[j]= temp;
    // }
    // for (int i = 0; i<7 ;i++){
    //     printf(" %d",arr[i]);
    // }
//------------------------------------------------------------------------------    
    //now we will rotate k times(k can be greter than n too)
    //case 1 k<n
    // int arr[7]={1,2,3,4,5,6,7};
    // int n = sizeof (arr)/sizeof (arr[0]);
    // int k;
    // printf("enter number of times you want to roate\n");
    // scanf("%d",&k);
    // k = k%n;
    // reverse(arr, 0 ,n-1);
    // reverse(arr, 0 ,k-1);
    // reverse(arr, k ,n-1);
    // printf("after rotation\n");
    // for(int i = 0; i<n ;i++){
    //     printf(" %d",arr[i]);
    // }
//------------------------------------------------------------------------------    
    // Given an array containing elements from 1 to 10 except one element is
    //missing. Find the missing element.
    // int arr[10]={1,3,4,5,6,7,8,9,10};
    // int n = sizeof (arr)/sizeof (arr[0]);
    // int sum = 0;
    // for (int i = 0;i<10;i++){
    //     sum = sum +arr[i];
    // }
    // int sumog = (10*11)/2;
    // printf("missing element is %d",sumog - sum);
    return 0;
}