// #include <stdio.h>
// #include <string.h>
// int main()
// {
	//palindrome in integer
	// int num , original , rev=0, p ;
	// printf("enter the number\n");
	// scanf("%d",&num);
	// original = num;

	// while(num != 0){
	//     p = num % 10;
	//     rev = rev*10 + p;
	//     num = num /10;
	// }
	// if(original==rev){
	//     printf(" %d is Palindrome number\n",original);
	// }
	// else{
	//     printf(" %d is not a palindrome\n",original);
	// }

	//palindrom in words like madam

// 	char str[100];
// 	int i = 0, j = 0;
// 	printf("Enter string: ");
// 	scanf("%s", str);
// // length find karna
// 	while(str[j] != '\0') {
// 		j++;
// 	}
// 	j--;   // last character

	// first aur last compare
// 	while(i < j) {
// 		if(str[i] != str[j]) {
// 			printf("Not Palindrome");
// 			return 0;
// 		}
// 		i++;
// 		j--;
// 	}
// 	printf("Palindrome");
// 	return 0;
// }