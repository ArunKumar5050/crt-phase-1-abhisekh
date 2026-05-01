//problem 1  if condition
// to verify user's age wether eligible for vote or not ?
// #include <iostream>
// using namespace std;

// int main (){
//     int age;
//     cin>>age;
//     //if condition
//     if(age >= 18){
//         //logic
//         cout<<"Eligible for vote"<<endl;
//     }
//     return 0;

// }










// Problem 2 -- If - else condition 
// to verify user's age wether eligible for vote or not ?
// #include <iostream>
// using namespace std;

// int main() {
//     int age;
//     cin >> age;
//     // if condition 
//     if(age >= 18) {
//         // logic 
//         cout << "Eligible For vote";
//     } else {
//         // logic 
//         cout << "Not Eligible For vote";
//     }
//     return 0;
// }








//program 3
//to verify user's age wether eligible for vote or not ?
// #include <iostream>
// using namespace std;

// int main(){
//     int age;
//     cin>>age;
//     if(age >= 18){
//         if(age >= 100){
//             cout<<"Eligible for vote (but You are a super senior citizen)"<<endl;
//         }else{
//             cout<<"Eligible for vote"<<endl;
//         }
//     }else{
//         if(age < 0){
//             cout<<"Invalid age"<<endl;
//         }else{
//             cout<<"Not eligible for vote"<<endl;
//         }
//     }

//     return 0;
// }











// problem 4    
// find the greater number among 2

#include <iostream>
using namespace std;

int main(){
    int a, b;
    int max_number;
    cin>>a>>b;

    //ternary operator
    max_number = (a > b) ? a : b;
    cout<<"Greater number is: "<<max_number<<endl;

    return 0;
}
 




//problem 5 --CONTINUE STATEMENT
// print 1 to n and avoid those number which are divisible by 3

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1; i <= n; i++){
//         if(i % 3 == 0){
//             continue; // skip the current iteration and move to the next iteration
//         }
//         cout<<i<<" ";
//     }
//     return 0;
// }




//problem 6 -- BREAK STATEMENT
// we have to add numbers until we get a negative nummber
#include <iostream>
using namespace std;    

int main(){
    int n;
    int sum = 0;

    while(true){
        cin>>n;
        if(n<0){
            break;

        }
        sum = sum + n;
    }
    cout<<"Sum: "<<sum<<endl;
    return 0;
}
