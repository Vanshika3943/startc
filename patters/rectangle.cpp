#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no.of rows: "<<endl;
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=0;j<5;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}