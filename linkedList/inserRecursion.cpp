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

    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}