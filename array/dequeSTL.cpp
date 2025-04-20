#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(5);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.push_back(3);
    d.push_front(4);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_front();
     for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"element at index ->"<<d.at(2)<<endl;
    cout<<"deque is empty or not->"<<d.empty()<<endl;
    cout<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+3);
    cout<<d.size()<<endl;
    cout<<"deque is empty or not->"<<d.empty()<<endl;
    
    
}