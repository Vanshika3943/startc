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

int main(){
    int arr[]={2,3,4,5,6};
    int n=5;
    Node* head=NULL;
    // for(int i=0;i<n;i++){
    //     if(head==NULL){
    //         head=new Node(arr[i]);
    //     }
    //     else{
    //         Node* curr=head;
    //         while(curr->next != NULL){
    //             curr=curr->next;
    //         }
    //         Node* temp=new Node(arr[i]);
    //         curr->next=temp;
    //         temp->prev=curr;

    //     }
    // }
    Node* tail=NULL;        //by using tail pointer we will use one less loop
    for(int i=0;i<n;i++){
        if(head==NULL){
            head=new Node(arr[i]);
            tail=head;
        }
        else{
            Node* temp=new Node(arr[i]);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
    }

    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}