#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="hello";
    m[2]="world";
    m[6]="hew";
    m[4]="hthe";
    m.insert({10,"akuu"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }
    cout<<"no. present or not->"<<m.count(2)<<endl;
    
}