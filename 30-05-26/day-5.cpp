//program 1
// print half diamond pattern
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number of rows: ";
//     cin>>n;

  
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

   
//     for(int i=n-1; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }








//program 2
//function declaration and initialization
// #include <iostream>
// using namespace std;

// void printMessage() {
//     cout << "Hello, this is a message from the function!" << endl;
// }

// int main() {
    
//     printMessage();
//     return 0;
// }










// problem 3
// making function with argument and return type
// #include <iostream>
// using namespace std;

// int area(int a, int b){
//     return a*b;
// }

// int main(){
//     int length=10; 
//     int width=5;
//     int areaOfRectangle= area(length, width);
//     cout<<areaOfRectangle<<endl;
//     return 0;
// }









// problem 4
// no argument and no return type
// #include <iostream>
// using namespace std;

// void DoorBell(){
//         cout<<"Ding Dong!"<<endl;
//     }

// int main(){
//     DoorBell();
//     return 0;
// }




// problem 5
// argument but no return type
// #include <iostream>
// using namespace std;


// void SendText(string message){
//     cout<<"Sending text: "<<message<<endl;
// }

// int main(){
//     SendText("Hello, this is a test message!");
//     return 0;
// }







//problem 6
// no argument but return type
// #include <iostream>
// using namespace std;

// int ticketNumber(){
//     return 42; 
// }

// int main(){
//     int myTicket = ticketNumber();
//     cout<<"Your ticket number is: "<<myTicket<<endl;
//     return 0;
// }











// problem 7
//with argument and return type
// #include <iostream>
// using namespace std;

// int currencyConverasion(int amountInUSD){
//     return amountInUSD * 100;
// }

// int main(){
//     cout<<currencyConverasion(50)<<endl;
//     return 0;
// }   








// problem 8
// function overloading


// #include <iostream>
// using namespace std;

// int add(int a, int b){
//     return a+b;
// }
// int add(int a, int b, int c){
//     return a+b+c;
// }
// int add(int a, int b, int c, int d){
//     return a+b+c+d;
// }

// double add(double a, double b){
//     return a+b;
// }

// int main(){
//     cout<<add(5, 10)<<endl;
//     cout<<add(3, 2, 5)<<endl;
//     cout<<add(2,3,4,5)<<endl;
//     cout<<add(3.5, 2.5)<<endl;
//     return 0;
// }












// problem 9
// pointers
#include <iostream>
using namespace std;

int main(){
    int age = 25;
    int *ptr = &age;
    cout<<age<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;


    return 0;
}