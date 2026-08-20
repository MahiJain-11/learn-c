// #include <stdio.h>

// int main()
// {
// //time complexity
// //BIG O notation
// //Input badhne par program ka kaam kitni speed se badhta hai.ye btati hai time complexity
// it is represented as O(n)... n ka mtlb input size
// a) O(1) ----> constant time (ek hi baar kaam hua jese a+b,sum ++ etc)
//    O(1) mtlb NO LOOP
// b) O(n) ----> Linear time (loops chlta hai isme jese int i = 0 ;i<5 ;i++) toh n=5
//    esa likha ho print a , print b , print c k hisab se 3n operaton hone chahiye 
//    but n aur 3n mai same growth hogi so time complexity will be O(n).
//    for(int i=0;i<n;i++){
//       printf("A");
//       printf("B");
//       printf("C");
//    }
// we always ignore constant in 3n 2n 4n etc and time complexity remains O(n)only
// jese let's take one more example

// c)  for(int i=0;i<n;i++)
//         printf("A");

//     for(int i=0;i<n;i++)
//         printf("B");
//     2 loops hai ek ka n operations  dusre ka bhi n operation so O(2n) hona chahiye 
//     but growth same hogi toh O(n) hi rhega 
    
// d)  Nested loops mai time complexity will be O(n^2)
//     for example
//     for(int i=0;i<n;i++){
//         for(int j=0 ;j<n;j++)
//            printf(*);
        
//     }
//    maan lo n=3 ,then time complexity will be O(n^2)---> O(3^2)
// e)  iss case mai inner loop chota hora hai fir be time complexity will be O(n^2)
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             printf("*");
//         }
//     }
// f)  Logarithmic Loop
//     agar K times increase ya decrease hora hai output toh time complexity will 
//     be O(log n)
//     trick jab bhi i*=2 yaa fir i/=2 ho toh log wla hoga
    
// g)  three nested loops mai ---> O(n^3) 

// h)  Loop + i*=2 ----->  O(n log n)
//     return 0;
// }