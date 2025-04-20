#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        next=NULL;
        prev=NULL;
    }
};

int main(){
    int arr[]={1,2,3,4};
    int n=4;
    Node* head=NULL;
    for(int i=0;i<n;i++){
        if(head==NULL){
            head=new Node(arr[i]);
        }
        else{
            Node* temp =new Node(arr[i]);
            head->prev=temp;
            temp->next=head;
            head=temp;

        }
    }
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
   
}