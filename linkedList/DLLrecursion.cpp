#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

Node* createDLL(int arr[],int size,int index,Node* back){
    if(index==size){
        return NULL;
    }
    else{
        Node* temp=new Node(arr[index]);
        temp->prev=back;
        temp->next=createDLL(arr,size, index+1, temp);
        return temp;
    }
}



int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    Node* head=NULL;
    head=createDLL(arr,n,0,NULL);
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}