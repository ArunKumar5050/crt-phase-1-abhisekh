// problem --1
// swapping of values of 2 variables

// #include<iostream>
// using namespace std;

// void swapNumbers(int* a, int* b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(){
//     int a;
//     int b;
//     cin>>a>>b;
//     swapNumbers(&a, &b);
//     cout<<"a="<<a<<" b="<<b<<endl;
//     return 0;
// }

// problem --2
// default arguments
//  #include<iostream>
//  using namespace std;

// int area(int a, int b=5){
//     return a*b;
// }

// int main(){
//     cout<<area(10)<<endl;
//     return 0;
// }

// problem --3
// call by value // call by reference
// call by value -- photocopy
// call by reference -- original

// #include<iostream>
// using namespace std;

// void updatebyValue(int a){
//     a = 500;
//     cout<<"Inside updatebyValue: "<<a<<endl;
// }

// void updatebyReference(int &a){
//     a = 500;
//     cout<<"Inside updatebyReference: "<<a<<endl;
// }

// int main(){
//     int original = 100;
//     updatebyValue(original);
//     cout<<"Outside updatebyValue: "<<original<<endl;
//     updatebyReference(original);
//     cout<<"Outside updatebyReference: "<<original<<endl;
// }

// practice --1
// i will paas number of coffee and other function tell that total amount
#include <iostream>
using namespace std;

int totalAmount(int numberOfCoffee)
{
    int price = 50;
    int total = numberOfCoffee * price;
    return total;
}

int main()
{
    int numberOfCoffee;
    cout << "Enter the number of coffee: ";
    cin >> numberOfCoffee;
    cout << totalAmount(numberOfCoffee) << endl;

    return 0;
}
