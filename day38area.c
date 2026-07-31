#include <stdio.h>
#include <math.h>
void printtable(int n);
int areasquare(int n);
float areacircle (float p);
int arearectangle(int l , int b);

int main(){
    // int n;
    // printf("enter the number you want table of:\n");
    // scanf("%d", &n);
    // printtable(n);
    
    //write a function to write area of a square a circle and a rectangle 
    // for area of square:-
    // int n, area;
    // printf("enter the length of sides\n");
    // scanf("%d",&n);
    // area  = n*n;
    // printf("%d", area);
    //OR you can do
    // area = pow(n,2);
    // printf("%d", area);
    // to find all together i am gonna use functions
    // int l=5;
    // int b=3;
    // printf("area is %d", arearectangle(l,b));
    // int n = 7;
    // printf("area is %d", areasquare(n));
    // float p = 5.6;
    // printf(" area is %f",areacircle(p));
    return 0;
}
// void printtable(int n){
//     for(int i=1;i<=10;i++){
//         printf("%d\n",i*n);
//     }
int areasquare(int n){
    return n * n;
}
float areacircle(float p){
    return 3.14 * p *p;
}
int arearectangle(int l , int b){
    return l*b;
}