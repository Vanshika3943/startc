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
} ;

Node* CreateLinkedList(int arr[],int index,int size,Node* prev){
    if(index==size){
        return prev;
    }

    Node* temp= new Node(arr[index]);
    temp->next = prev;
    return CreateLinkedList(arr,index+1,size,temp);
}

int main(){
    int arr[]={2,3,4,5,6,7,8};
    int size=7;
    Node* head=NULL;
    head=CreateLinkedList(arr,0,size,head);

    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}