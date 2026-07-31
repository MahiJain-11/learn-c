#include <stdio.h>

// void reverse(int arr[], int n)
// {
//     int i = 0;
//     int j = n - 1;
//     int temp;

//     while (i < j)
//     {
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;

//         i++;
//         j--;
//     }
// }
int main()
{
	//Find the largest element in an array
	//   int arr[5]={10,4,13,23,45};
	//     int max = -1;
	//     for(int i = 0 ; i<=4 ; i++){
	//         if (max <arr[i]){
	//             max = arr[i];
	//         }
	//     }
	//     printf("%d\n",max);

	//find the second largest element in an array 
	
	// write a programme to copy the content of one array to another in revers
	//order
    // 	int arr[5]={1,2,3,4,5};
    // 	int brr[5]={5,4,3,2,1};
    // 	for (int i =0;i<5;i++){
    // 	    brr[i]=arr[4-i];
    // 	}
    //     for (int i =0;i<5;i++){
    //         printf("%d",brr[i]);
    //     }
    
    //METHOD 2
    // 	int arr[5]={1,2,3,4,5};
    //     int brr[5];
    //     	for (int i =0;i<5;i++){
    //     	    brr[i]=arr[4-i]; //arr2[i] = arr1[n-1-i];
    //     	}
    //     	for (int i =0;i<5;i++){
    //     	    arr[i]=brr[i];
    //     	}
    //         for (int i =0;i<5;i++){
    //             printf("%d ", arr[i]);
    //         }

    //write a programme to copy the content of one array to another in revers
	//order  without using any extra array
// 	  int arr[] = {10, 20, 30, 40, 50};
//       int n = sizeof(arr) / sizeof(arr[0]);

//     reverse(arr, n);

//     printf("Reversed Array:\n");

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
	return 0;
}