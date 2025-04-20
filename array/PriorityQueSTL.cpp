#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> maxi;//max heap
    
    priority_queue<int,vector<int>,greater<int>> mini;//min heap
    
    maxi.push(1);
    maxi.push(2);
    maxi.push(4);
    maxi.push(3);
    cout<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    cout<<maxi.size()<<endl;
    
    mini.push(0);
    mini.push(2);
    mini.push(4);
    mini.push(6);
    mini.push(8);
    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<mini.size()<<endl;
    
}