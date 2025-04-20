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

Node* createDLL(int arr[],int n,int index,Node* back){
    if(index==n){
        return NULL;
    }
    else{
        Node* temp=new Node(arr[index]);
        temp->prev=back;
        temp->next=createDLL(arr,n,index+1,temp);
        return temp;
    }
}

int main(){
    int arr[]={1,2,3,4,6,7,8,9,10};
    int n=9;
    Node* head=NULL;
    head=createDLL(arr,n,0,NULL);

    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
    cout<<"enter the position from where you want to delete the node"<<endl;
    int pos;
    cin>>pos;
    if(pos==1){
        if(head->next==NULL){   //if only one node exist
            delete head;
            head=NULL;
        }
        else{
            Node* temp=head;     //if LL is exist
            head=head->next;
            delete temp;
            head->prev=NULL;
        }
    }
    else{
        Node* curr=head;
        while(--pos){
            curr=curr->next;
        }
        if(curr->next==NULL){   //to delete last element
            curr->prev->next=NULL;
            delete curr;
        }
        else{
            curr->prev->next=curr->next;
            curr->next->prev=curr->prev;
            delete curr;
        }
    }

    cout<<endl;
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}