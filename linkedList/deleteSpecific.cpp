#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

Node* CreateLL(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    Node *temp=new Node(arr[index]);
    temp->next= CreateLL(arr,index+1,size);
    return temp;
}

int main(){
    Node* head=NULL;
    int arr[]={2,3,4,5,7,8,9};
    head= CreateLL(arr,0,7);

    int x=2;
    if(x==1){
        Node* temp=head;
        head=head->next;
        delete temp;

    }
    Node* curr=head;
    Node* prev=NULL;
    x--;
    while(x--){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;


    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
