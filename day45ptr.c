#include <stdio.h>
void swap (int* x , int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{ //POINTERS IT STORES ADDRESS OF VARIABLE
    // int age = 5;
    // printf("%p",&age);// %p se address print hota h
    // int a=54;
    // int* x = &a;
    // printf("%p\n",x);
    // printf("%p\n",&x);
    // printf("%d",*x);
    
    //Swap two numbers using pointers ....and pass by refference 
    int a;
    printf("enter value of a\n");
    scanf("%d",&a);
    int b;
    printf("enter value of b\n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b);
    return 0;
}