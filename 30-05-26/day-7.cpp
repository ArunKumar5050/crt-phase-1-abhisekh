// problem --1
// access specifier
// #include <iostream>
// using namespace std;

// class BandAccount
// {
// private:
//     int Balance = 5000;

// public:
//     void showBalance()
//     {
//         cout << "Balance is" << Balance << endl;
//     }
// };

// int main(){
//     BandAccount b1;
//     b1.showBalance();
//     return 0;
// }

// access specifier
//  #include <iostream>
//  using namespace std;

// class Parent{
//     protected:
//     int secretCode = 1234;

// };
// class Child : public Parent{
//     public:
//     void showSecretCode(){
//         cout<<"Secret code is "<<secretCode<<endl;
//     }
// };

// int main(){
//     Child c1;
//     c1.showSecretCode();
//     return 0;
// }

// example of public pirvate and protected

// #include <iostream>
// using namespace std;

// class MyClass
// {
// private:
//     int privateData = 42;

// public:
//     void publicMethod()
//     {
//         cout << "This is a public method." << endl;
//         cout << "Accessing private data: " << privateData << endl;
//     }

// protected:
//     void protectedMethod()
//     {
//         cout << "This is a protected method." << endl;
//     }
// };

// class DerivedClass : public MyClass
// {
// public:
//     void accessProtectedMethod()
//     {
//         protectedMethod();
//     }
// };

// int main()
// {
//     MyClass obj;
//     obj.publicMethod();

//     DerivedClass derivedObj;
//     derivedObj.accessProtectedMethod();
//     return 0;
// }

// constructor
// default constructor
// parameterized constructor
// copy constructor
// #include <iostream>
// using namespace std;

// class wifiConnection
// {
// public:
//     string networkName;
//     int password;

//     // constructor
//     wifiConnection()
//     {
//         networkName = "MyNetwork";
//         password = 12345678;
//     }

//     void showDetails()
//     {
//         cout << "Network Name: " << networkName << endl;
//         cout << "Password: " << password << endl;
//     }
// };

// int main()
// {
//     wifiConnection w1;
//     // w1.networkName = "MyNetwork";
//     // w1.password = 12345678;
//     w1.showDetails();
//     return 0;
// }

// parameterized constructor

// class Student
// {
// public:
//     string name;
//     int id;

//     void displayDetails(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"ID: "<<id<<endl;
//     }
// };

// int main()
// {
//     Student std;
// }

// pillor of oops
// encapsulation
// encapsulatio means we are bilding the data into a single unit (function and data , variable , method)
// into a single unit called class and making some restrictions on this class members
// data security
// controlled access over my data
// validation before accessing the data
// code mantainability
#include <iostream>
using namespace std;

class bankAccount
{
private:
    int balance;

public:
    void setBalance(int amount)
    {
        if (amount >= 0)
        {
            balance = amount;
        }
        else
        {
            cout << "Invalid amount. Balance cannot be negative." << endl;
        }
    }

    int getbalance()
    {
        return balance;
    }
};

int main()
{
    bankAccount b1;
    b1.setBalance(5000);
    cout << "Balance: " << b1.getbalance() << endl;
    return 0;
}





//abstraction
//abstraction means hiding the implementation and sharing only the necessary details to the user
//feeatures to the users
//abstract class --class cannot be initialized and it is formed using the abstract keyword
//abstract method -- there is 
