#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    //constructor
    Node (int value){
        data=value;
        next= NULL;
    }
};

int main(){
   Node *head;
   head = new Node(4);
   cout<<head->data<<endl;
   cout<<head->next<<endl;
   
    
}
