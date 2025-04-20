#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(const string &a,const string &b){
    return a.length()<b.length();
}

int main(){
    int n;
    cout<<"enter no. of strings"<<endl;
    cin>>n;
    cin.ignore();
    vector<string> strings;
    for(int i=0;i<n;i++){
        string str;
        getline(cin,str);
        strings.push_back(str);
    }
    
    sort(strings.begin(),strings.end(),compare);
    cout<<"after sorting"<<endl;
    for(const string &s:strings){
        cout<<s<<endl;;
    }
}