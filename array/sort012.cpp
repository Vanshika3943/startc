#include<iostream>
#include<vector>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void sort012(int arr[],int n){
    int i=0,j=n-1,k=0;
    while(k<=j){
        if(arr[k]==0){
            swap(arr[i],arr[k]);
            i++;
            k++;
        }
        else if(arr[k]==1){
            k++;
        }
        else {
            swap(arr[k],arr[j]);
            j--;
        
        }
    }
}

int main(){
    int arr[12]={0,0,1,2,0,2,0,1,1,0,2,2};
    int n=12;
    sort012(arr,n);
    printArray(arr,n);
}