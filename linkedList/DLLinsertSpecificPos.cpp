#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node( int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
Node* createDLL(int arr[],int size ,int index,Node* back ){
    if(index==size){
        return NULL;
    }
    Node* temp= new Node(arr[index]);
    temp->prev= back;
    temp->next=createDLL(arr,size,index+1,temp);
    return temp;
}


int main(){
    int arr[]={2,3,5,6};
    int n=4;
    Node* head=NULL;
    head=createDLL(arr,n,0,NULL);

    Node* pt=head;
    cout<<"print old LL"<<endl;   
    while(pt){
        cout<<pt->data<<" ";
        pt=pt->next;
    }
    cout<<endl;

    int pos;
    cin>>pos;
    
    
    if(pos==0){
        if(head==NULL){
            head=new Node(10);
        }
        else{
            Node* temp= new Node(10);
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
    }
    else{
        Node* curr=head;
        while(--pos){
            curr=curr->next;
        }
        if(curr->next!=NULL){
           Node* temp=new Node(10);
           temp->next=curr->next;
           temp->prev=curr;
           curr->next=temp;
           temp->next->prev=temp;
        }
        else{
            Node* temp= new Node(10);
            curr->next=temp;
            temp->prev=curr;
        }
    }
    cout<<endl;
    cout<<"list after insertion"<<endl;
    pt=head;
    while(pt){
        cout<<pt->data<<" ";
        pt=pt->next;
    }
    
}