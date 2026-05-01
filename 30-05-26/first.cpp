//problem 1
//temprature conversion
// Take input in the form of calcius and convert it into fahrenheit
// #include <iostream>
// using namespace std;
// int main(){
//     double calcius;
//     double fahrenheit;
//     cin>>calcius;
//     fahrenheit = (calcius * 9.0/5.0) + 32.0;
//     cout<<fahrenheit<<endl;
//     return 0; 
// }










//problem 2
// // Global and local variables
// #include <iostream>
// using namespace std;

// //global variable
// int globalVariable = 100;
// int main(){
//     //local variable
//     int userInput;
//     float result;
//     cin>>userInput;
//     result = (double)globalVariable / userInput;
//     cout<<result<<endl;
//     return 0;

// }












//problem 3
// // logical and relatonal operators
// #include <iostream>
// using namespace std;

// int main(){
//     int side1, side2, side3;
//     cin>>side1>>side2>>side3;
//     bool isEqui = (side1 > 0) && (side1 == side2) && (side2 == side3);
//     cout<<isEqui<<endl;
//     return 0;
// }










//problem 5
//take input from the use and find sum and average
// #include <iostream>
// using namespace std;

// int main(){
//     int a ,b, c, sum;
//     float average;
//     cin>>a>>b>>c;
//     sum = a + b + c;
//     average = (float)sum / 3.0;
//     cout<<"Sum: "<<sum<<endl;
//     cout<<"Average: "<<average<<endl;
//     return 0;
// }










//problem 6
//login credentials program
#include <iostream>
using namespace std;

int main(){
    const int userId = 1234;
    const int password = 0000;
    int inputUserId, inputPassword;
    cin>>inputUserId>>inputPassword;

    bool isGranted = (inputUserId == userId) && (inputPassword == password);
    cout << "Access granted: " << isGranted << endl;
    cout << "Access denied: " << !isGranted << endl;

    return 0;
}












//problem 4
// //swap values of two variables using a 3rd variable
// #include <iostream>
// using namespace std;

// int main(){
//     int a, b;
//     cin>>a>>b;

//     //swapping logic 
//     int temp = a;
//     a = b; 
//     b = temp; 
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }










//problem 5
//area of shapes
//1 -- circle
//2 -- rectangle    
//3 -- triangle
#include <iostream> 
using namespace std;

int main(){
    int choice;
    cin>>choice;
    if(choice == 1){
        double radius;
        cin>>radius;        
        cout<<3.14 * radius * radius<<endl;
    }
    else if(choice == 2){
        double length, breadth;
        cin>>length>>breadth;        
        cout<<length * breadth<<endl;
    }
    else if(choice == 3){
        double base, height;
        cin>>base>>height;
        cout<<0.5 * base * height<<endl;
    }
    else{
        cout<<"Invalid choice"<<endl;
    }

    return 0;

}    