#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(2);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(9);
    s.insert(1);
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    s.erase(s.begin());
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"no is present or not->"<<s.count(2)<<endl;
    set<int>::iterator itr=s.find(2);
    cout<<"value present at iterator "<<*itr<<endl;
    
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
    
    
    
}