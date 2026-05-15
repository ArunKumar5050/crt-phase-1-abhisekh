// #include<iostream>
// using namespace std;

// class Node{
//     int data;
//     Node* next;
//     Node(int new_data){
//         this->data = new_data;
//         this->next = nullptr;
//     }
// };
// Node* head = nullptr;
// void traversal(){
//     while(head != nullptr){
//         cout<<head->data<<" ";
//         head = head->next;
//     }
// }

// int main(){
//     head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);

//     return 0;
// }









//problem - 2
//inserting the data at the end of the linked list
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
public:
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};
Node* head = nullptr;
void deleteAthead(){
    if(head == nullptr){
        cout<<"List of empty"<<endl;
        return;
    }
    head = head->next;
}
void display(){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}