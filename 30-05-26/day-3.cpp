//problem  1
// print 1 to 10 using for loop


// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=1; i<=10; i++){
//         cout<<i<<" ";
//     }
//     return 0;
// }


// problem 2
// print 10 to 1  using for loop

// #include<iostream>
// using namespace std;    

// int main(){
//     for(int i=10; i>=1; i--){
//         cout<<i<<" ";
//     }
//     return 0;
// }





// problem 3
// print 1 to 20 using while loop

// #include<iostream>
// using namespace std;    

// int main(){
//     int i=1;
//     while(i<=20){
//         cout<<i<<" ";
//         i++;
//     }
//     return 0;
// }






//problem 4
// print 20 to 1 using while loop
// #include<iostream>
// using namespace std;    

// int main(){
//     int i=20;
//     while(i>=1){
//         cout<<i<<" ";
//         i--;
//     }
//     return 0;
// }




//problem 5
// print 1 to 10 using do while loop

// #include<iostream>  
// using namespace std;

// int main(){
//     int i=1;
//     do{
//         cout<<i<<" ";
//         i++;
//     }while(i<=10);
//     return 0;
// }




//problem 6
// print 10 to 1 using do while loop

// #include<iostream>
// using namespace std;

// int main(){
//     int i=10;
//     do{
//         cout<<i<<" ";
//         i--;
//     }while(i>=1);
//     return 0;
// }   







//problem 7
//factorial of a number

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact *= i;
//     }
//     cout<<"factorial of "<<n<<"is :"<<fact<<endl;
//     return 0;
// }









//problem 8
//print febonacci series

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number of terms: ";
//     cin>>n;
//     int a=0, b=1, c;
//     cout<<"Fibonacci series: ";
//     for(int i=1; i<=n; i++){
//         cout<<a<<" ";
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return 0;
// }   









//problem 9


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     bool isPrime = true;
//     if(n<2){
//         isPrime = false;
//     }else{
//         for(int i=2; i<=n/2; i++){
//             if(n%i==0){
//                 isPrime = false;
//                 break;
//             }
       
//         }
//     }if(isPrime){
//         cout<<n<<" is a prime number."<<endl;
//     }else{
//         cout<<n<<" is not a prime number."<<endl;
//     }
//     return 0;
// }








// problem 10
// smartphone unlock
// try to unlock the phone until we get the correct password 

#include<iostream>
using namespace std;

int main(){
    int password;
    do{
        cout<<"Enter the password to unlock the phone: ";
        cin>>password;
    }
    while(password!=1234);
    cout<<"Phone unlocked successfully!"<<endl;
    return 0;
}