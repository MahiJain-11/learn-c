#include <stdio.h>
#include <stdbool.h>

int main() {
	//find the missing element
	// int arr[5]={1,2,4,5};
	// int sum = 0;
	// int sumog=0;
	// for(int i =0;i<5;i++){
	//     sum = sum+arr[i];
	//     sumog = (5*6)/2;
	// }
	// printf("%d",sumog-sum);

	// Given array and a integer x .Find out if the integer x is present in aray
	//or not .if yes print the array
	// int arr[7]={1,2,3,4,5,6,7};
	// int x;
	// printf("Enter the number you wanna find\n");
	// scanf("%d",&x);
	// for (int i = 0 ;i<7 ; i++){
	//     if(arr[i]==x){
	//         printf("%d is present in the array and it's index is %d",x ,i);
	//         break;
	//     }
	// else{
	//     printf("%d is not present in array",x);
	//     break;
	// }
	// }
	//METHOD 2
	// int arr[7]={1,2,3,4,5,6,7};
	// int x;
	// printf("Enter the number you wanna find\n");
	// scanf("%d",&x);
	// int check = 0; // 0 means element is not present
	// for (int i = 0 ; i<7 ; i++){
	//     if (arr[i]==x){
	//         check = 1; // 1 means element is present
	//         break;
	//     }
	// }
	// if (check == 0){
	//     printf("%d is not present",x);
	// }
	// else {
	//     printf("%d is present",x);
	// }

	//METHOD 3 using boolean
    // 	int arr[7]= {1,2,3,4,5,6,7};
    // 	int x;
    // 	printf("Enter the number you wanna find\n");
    // 	scanf("%d",&x);
    // 	bool flag = false;
    // 	for (int i = 0 ; i<7 ; i++) {
    // 		if(arr[i]==x) {
    // 		    flag = true ;
    // 			break;
    // 		}
    // 	}
    // 	if (flag == true){
    // 	    printf("%d is present",x);
    // 	}
    // 	else{
    // 	    printf("%d is not present",x);
    // 	}

    // TO FIND DUPLICATE ELEMENT IN array
    // int arr[7]={1,8,1,5,4,6,7};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for (int i = 0; i<n ; i++){
    //     for (int j = i+1 ; j<n; j++){
    //         if (arr[i]==arr[j]){
    //             printf("%d is duplicate\n",arr[i]);
    //             break;
    //         }
    //     }
    // }
     
	//Find the unique element in an array where all the other elements are 
    //repeated twice.
    // int arr[5]={1,2,1,2,3};
    // for(int i = 0 ; i<5 ; i++){
    //     bool flag = false;
    //     for (int j = 0 ; j<5 ; j++){
    //         if( i!= j && arr[i] == arr[j]){
    //             flag = true;
    //         }
    //     }
    //     if(flag == false){
    //         printf("%d is unique",arr[i]);
    //         break;
    //     }
    // }
	return 0;
}