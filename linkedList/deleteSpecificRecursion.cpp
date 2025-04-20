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

Node* createLL(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    Node* temp=new Node(arr[index]);
    temp->next=createLL(arr,index+1,size);
    return temp;

}

Node* deleteNodeSpecific(Node* curr,int x){
    if(x==1){
        Node* temp= curr->next;
        delete curr;
        return temp;
    }
    curr->next=deleteNodeSpecific(curr->next , x-1);
}

void print(Node* head){
    Node* temp=head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    int arr[]={2,3,4,5,7,8,9};
    int index=0;
    int size=7;
    Node* head=createLL(arr,index,size);
    cout<<"original list:"<<endl;
    print(head);

    int x=3;
    head= deleteNodeSpecific(head,x);

    cout<<endl<<"after deletion"<<endl;
    print(head);

}

