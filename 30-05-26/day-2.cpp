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