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

#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}