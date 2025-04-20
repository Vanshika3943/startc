#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    cout<<s<<endl;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'|| s[i]=='i'||s[i]=='o' ||s[i]=='u'){
            count++;
        }

    }
    cout<<count;

}