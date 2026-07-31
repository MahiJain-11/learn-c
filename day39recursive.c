#include <stdio.h>
void printnum(int n) {
// 	if (n>5)
// 		return;
// 	printf("%d\n",n);
//     printnum (n +1);
}
int sum(int n){
    if (n==1)
    return 1; // base case
    return n + sum(n-1);  // recursive call
}

int main()
{
	//RECURSIVE FUNCTION :- function repeat itself
	//eg printing number 1 to 5
    // 	printnum(1)
    // QUESTION 1 - Find sum of N natural number 
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    printf("sum = %d",sum(n));
    
	return 0;
}