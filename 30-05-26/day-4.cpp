//problem 1
//print1 to 10 , 10 number of times

// #include<iostream>
// using namespace std;
// int main(){
//     for (int i = 0; i <= 10; i++)
//     {
//         for (int j = 1; j <= 10; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
    
// }











// problem 2
//print a solid squre
// #include<iostream>
// using namespace std;
// int main(){
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
    
// }








//problem 3
//print right angle triangle
// #include<iostream>
// using namespace std;
// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
    
// }










//problem 4
//print the mirror right angle triangle

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "  ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
    
// }








//problem 5
//print a rectangle
// #include<iostream>
// using namespace std;

// int main(){
//     int row, col;
//     cin >> row >> col;
//     for (int i = 1; i <= row; i++){
//         for (int j = 1; j <= col; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }









//program 6
//print hollow square
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=5; j++){
//             if(i==1 || i==5 || j==1 || j==5){
//                 cout<<"* ";
//             }else{
//                 cout<<"  ";
//             }

//         }
//         cout<<endl;
//     }
// }



//program 7
//print a pyramid
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}