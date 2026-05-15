//recursion
//factorial of a no.
// #include <iostream>
// using namespace std;

// int factorial(int number){
//     //base condition
//     if(number == 0||number == 1){
//         return 1;
//     }
//     //recursive call
//     return number * factorial(number - 1);
// }

// int main(){
//    cout<< factorial(5);
// }







//fibonacci of a no.
// tail recursion
// #include <iostream>
// using namespace std;

// int fibonacci(int n){
//     //base condition
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return fibonacci(n-1) + fibonacci(n-2);
// }

// int main(){
//     cout<<fibonacci(4);
// }







// problem numnber 70
// Climbing Stairs
// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

// #include <iostream>
// using namespace std;    

// class solution{
//     public:
//     int climbStairs(int n){
//         if(n==0){
//             return 0;
//         }
//         if(n==1){
//             return 1;
//         }
//         if(n==2){
//             return 2;
//         }
//         return climbStairs(n-1) + climbStairs(n-2);
//     }
// };

// int main(){
//     solution s;
//     cout<<s.climbStairs(45);
// }









//binary string without consecutive one's

#include <iostream>

using namespace std;

