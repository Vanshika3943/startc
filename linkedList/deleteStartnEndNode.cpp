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

Node* CLL(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    else{
        Node* temp=new Node(arr[index]);
        temp->next= CLL(arr,index+1,size);
        return temp;
    }
}

int main(){
    int arr[]={2,4,6,7,8,9};
    int index=0,size=6;

    Node* head=NULL;
    head= CLL(arr,index,size);

    //delete start node
    if(head!=NULL){
        Node* temp=head;
        head=head->next;
        delete temp;
        
    }

    //delete last node
    Node* prev=NULL;
    Node* curr = head;
    while(curr->next!=NULL){
        prev=curr;
        curr=curr->next;
    }
    delete curr;
    prev->next=NULL;

    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}