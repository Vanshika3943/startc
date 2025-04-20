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

int main(){
    int arr[] = {2,4,6,8,10};
    Node* head;
    head=NULL;
    for(int i=0;i<5;i++){
        if(head==NULL){
            head= new Node(arr[i]);
        }
        else{
            Node* temp;
            temp=new Node(arr[i]);
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