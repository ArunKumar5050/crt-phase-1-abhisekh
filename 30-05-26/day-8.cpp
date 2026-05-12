// #include<iostream>
// using namespace std;

// class Vehicle{
// public:
//     void start(){
//         cout<<"Vehicle starts"<<endl;
//     }
// };

// class car : public Vehicle{
//     public:
//     void drive(){
//         cout<<"car is running"<<endl;
//     }
// };




// int main(){
//     car obj1;
//     obj1.drive();
//     obj1.start();

// }








//multi level inheritance

// #include<iostream>
// using namespace std;

// class Vehicle{
// public:
//     void start(){
//         cout<<"Vehicle starts"<<endl;
//     }
// };

// class car : public Vehicle{
//     public:
//     void drive(){
//         cout<<"car is running"<<endl;
//     }
// };


// class speedoMeter : public car{
//     public:
//     void speed(){
//         cout<<"speed is 100km/hr"<<endl;
//     }
// };

// int main(){
//     speedoMeter obj1;
//     obj1.speed();
//     obj1.drive();
//     obj1.start();

// }









//hierarchical inheritance
// #include<iostream>
// using namespace std;


// class Vehicle{
//     public:
//     void start(){
//         cout<<"Vehicle starts"<<endl;
//     }
// };

// class car : public Vehicle{
//     public:
//     void drive(){
//         cout<<"car is running"<<endl;
//     }
// };

// class Bike : public Vehicle{
//     public:
//     void run(){
//         cout<<"Bike is running"<<endl;
//     }
// };


// int main(){
//     car obj1;
//     Bike obj2;
//     obj1.start();
//     obj1.drive();
//     obj2.run();

    
// }











//multiple inheritance
// #include<iostream>
// using namespace std;

// class parent1{
//     public:
//   void getMeMoney(){
//     cout<<"Give me money"<<endl;
//   }  
// };

// class parent2{
//     public:
// void getMeMoney(){
//     cout<<"Give me money"<<endl;
//   }
    
// };

// class child : public parent1, public parent2{
//     public:
    
// };


// int main(){
//     child obj1;
//     // obj1.getMeMoney(); //error: request for member ‘getMeMoney’ is ambiguous
//     obj1.parent1::getMeMoney();
//     obj1.parent2::getMeMoney();
// }





//diamond problem


// #include<iostream>
// using namespace std;

// class A{
//     public:
//     void print(){
//         cout<<"Hello from A"<<endl;
//     }
// };

// class B : virtual public A{
//     public:
    
// };


// class C : virtual public A{
//     public:
    
// };



// class D : public B, public C{
//     public:
    
// };


// int main(){
//     D obj1;
//     obj1.print();
// }










//problem --2
//polymorphism
//polymorphism means one name but many forms
//some function behaves differently depending on the type of the object it called
//two Types
//Compile time polymorphism  -- Function overloading -- static
//it is resolved at compile time
//function overloads -- same function name , but different parameters
//faster execution
//run time polymorphism -- function overriding -- dynamic
//resolved at run time
//function overriding -- same function name and same parameters but different classes
//use a virtual keyword in the base class
//acheiving this through the concept of inheritance 







// function overloading using objects
#include<iostream>
using namespace std;

class math{
    public:
    int add(int a, int b){
        cout<<"sum of two numbers is "<<a+b<<endl;
    }
    public:
    int add(int a, int b, int c){
        cout<<"sum of three numbers is "<<a+b+c<<endl;
    }   

    public:
    double add(double a, double b){
        cout<<"sum of two double numbers is "<<a+b<<endl;
    }
    
};


int main(){
    math obj;
   
    obj.add(2, 3);
    obj.add(2, 3, 4);
    obj.add(2.5, 3.5);

}               







//function overriding
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     virtual void sound(){
//         cout<<"Animal makes a sound"<<endl;
//     }

// };
// class Dog : public Animal{
//     public:
//     void sound() override{
//         cout<<"Dog barks"<<endl;
//     }
// };

// class Cat : public Animal{
//     public:
//     void sound() override{
//         cout<<"Cat meows"<<endl;
//     }
// };

// int main(){
//     Dog d;
//     Cat c;
//     d.sound();
//     c.sound();  
// }






//function overriding 
// virtual function 
// #include<iostream>
// using namespace std;
// class parent{
//     public:
//     virtual void sum(int a, int b){
//         cout<<"sum of two numbers is "<<a+b<<endl;
//     }
// };
// class child : public parent{
//     public:
//     void sum(int a, int b)override{
//         cout<<"child sum of two numbers is "<<a+b<<endl;
//     }
// };







// int main(){
//     child c;
//     c.sum(2, 3);
//     return 0;
// }
