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
    Node* temp=new Node(arr[index]);
    temp->prev=back;
    temp->next=createDLL(arr,size,index+1,temp);
    return temp;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    Node* head=NULL;
    head=createDLL(arr,n,0,NULL);

    Node* ptr=head;
    cout<<"original list"<<endl;
    while(ptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
    cout<<"after deletion of 1st node"<<endl;
    if(head!=NULL){
        Node* temp=head;
        head=head->next;
        delete temp;
        if(head){
            head->prev=NULL;
        }

    }
    ptr=head;
    while(ptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }

    cout<<endl;
    cout<<"after deletion of last node"<<endl;
    
    
    if(head!=NULL){
        if(head->next=NULL){
            delete head;
        }
        else{
            Node* temp=head;
            while(temp){
            temp=temp->next;
            }
            temp->prev->next=NULL;
            delete temp;
        }
    }
    ptr=head;
    ptr=head;
    while(ptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }



}