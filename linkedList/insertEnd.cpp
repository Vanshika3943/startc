#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;

    }
    
};

int main(){
    int arr[] = {3,4,6,7,8,9};
    Node* head = NULL;

    // for(int i=0;i<6;i++){
    //     if(head==NULL){
    //         head=new Node(arr[i]);
    //     }
    //     else{
    //         Node* tail=head;
    //         while(tail->next!=NULL){
    //             tail=tail->next;
    //         }
    //         tail->next= new Node(arr[i]);
    //     }
    // }
    Node* tail=head;
    for(int i=0;i<6;i++){
        if(head==NULL){
            head = new Node(arr[i]);
            tail=head;
        }
        else{
            tail->next = new Node(arr[i]);
            tail= tail->next;
        }
    }


    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}