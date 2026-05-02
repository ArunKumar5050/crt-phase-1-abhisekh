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

#include<iostream>
using namespace std;

int main(){
    int i=10;
    do{
        cout<<i<<" ";
        i--;
    }while(i>=1);
    return 0;
}   







//problem 7
//factorial of a number

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    cout<<"factorial of "<<n<<"is :"<<fact<<endl;
    return 0;
}