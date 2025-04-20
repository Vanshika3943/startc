#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter no. of rows :";
    cin>>r;
    for(int i=0;i<r;i++){
        for(int c=0;c<r-i;c++){
            cout<<c+1;
        }
        cout<<endl;
    }
}