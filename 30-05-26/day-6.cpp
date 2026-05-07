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
// #include <iostream>
// using namespace std;

// int totalAmount(int numberOfCoffee)
// {
    
//     return numberOfCoffee * 50;
// }

// int main()
// {
//     int numberOfCoffee;
//     cout << "Enter the number of coffee: ";
//     cin >> numberOfCoffee;
//     cout << totalAmount(numberOfCoffee) << endl;

//     return 0;
// }






//practice --2
// smart ac Remote // function overloading // 

// 









// practice --3
//classes and objrects

// #include<iostream>
// using namespace std;
// class student{
//     public:
//     string name;
//     int age;
//     void introduce(){
//         cout<<"hi there, this person name is "<<name<<" and his age is "<< age<<endl;
//     }

// };


// int main(){
//     student s1, s2;
//     s1.name = "ajay";
//     s1.age = 20;
//     s1.introduce();
//     s2.name = "vijay";
//     s2.age = 22;
//     s2.introduce();
//     return 0;
// }





//practice --4
// access modifiers

#include <iostream>
using namespace std;    

class publicPark{
public:
    void enter(){
        cout<<"anyone can enter in the park"<<endl;
    }
};

int main(){
    publicPark p1;
    p1.enter();
    return 0;
}