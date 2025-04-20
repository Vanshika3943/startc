#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter no. of rows :";
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int c=1;c<=i+1;c++){
            cout<<c;
        }
        cout<<endl;
    }
}