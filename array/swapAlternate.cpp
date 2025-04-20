#include<iostream>
#include<vector>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void swapAlt(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if((i+1)<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    
    int arr[5]={1,2,3,4,5};
    int brr[6]={1,2,3,4,5,6};
    swapAlt(arr,5);
    print(arr,5);
    
    swapAlt(brr,6);
    print(brr,6);
    
}