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



// logical and relatonal operators
#include <iostream>
using namespace std;

int main(){
    int side1, side2, side3;
    cin>>side1>>side2>>side3;
    bool isEqui = (side1 > 0) && (side1 == side2) && (side2 == side3);
    cout<<isEqui<<endl;
    return 0;
}