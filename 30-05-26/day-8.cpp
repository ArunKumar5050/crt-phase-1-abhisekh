#include<iostream>
using namespace std;

class Vehicle{
public:
    void start(){
        cout<<"Vehicle starts"<<endl;
    }
};

class car : public Vehicle{
    public:
    void drive(){
        cout<<"car is running"<<endl;
    }
};


class speedoMeter : public car{
    public:
    void speed(){
        cout<<"speed is 100km/hr"<<endl;
    }
};

int main(){
    speedoMeter obj1;
    obj1.speed();
    obj1.drive();
    obj1.start();

}