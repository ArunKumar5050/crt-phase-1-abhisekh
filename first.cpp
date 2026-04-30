//temprature conversion
// Take input in the form of calcius and convert it into fahrenheit
#include <iostream>
using namespace std;
int main(){
    double calcius;
    double fahrenheit;
    cin>>calcius;
    fahrenheit = (calcius * 9.0/5.0) + 32.0;
    cout<<fahrenheit<<endl;
    return 0; 
}
