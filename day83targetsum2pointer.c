#include <stdio.h>

int main()
{
//space complexity
//space complexity tells us how much extra memory an algorithm uses as the input size n grows.

//SORTING ---> sort ---> in general it means sorting in ascending order
// but agr specifically bola hai toh decreasing krna bhi ho skta
//suppose we have given an aray and we need to find the numbers that sums up to
//target number 
//METHOD 1 ---> BRUTE FORCE
// int target;
// int arr[5] = {2,7,6,4,3};
// printf("enter target number\n");
// scanf("%d",&target);
// for(int i =0 ; i<5 ; i++){
//     for(int j= i+1; j<5 ; j++){
//         if(arr[i]+arr[j] == target){
//             printf("%d and %d sums up to %d\n",arr[i],arr[j],target);
//         }
//     }
// }

//method 2 ---> 2 pointers
// given an array of integers numbers that is already sorted in ascending order
//find two numbers such that they adds upto a specific target number
int arr[]={1,2,4,6,8,10};
int target;
int n = 6;
printf("enter target\n");
scanf("%d",&target);
int left = 0;
int right = n -1;
while(left<right){
    int sum = arr[left] + arr[right];
    if(sum == target){
        printf("%d and %d adds upto the %d\n",arr[left],arr[right],target);
        break;
    }
    else if (sum < target){
        left++;
    }
    else{
        right--;
    }
}
    return 0;
}