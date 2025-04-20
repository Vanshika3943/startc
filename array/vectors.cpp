#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(10);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.pop_back();
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    
    vector<int>brr(10,3);
    cout<<"for second array size is "<<brr.size()<<endl;
    cout<<"capacity is "<<brr.capacity()<<endl;
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    
    vector<int>crr{10,20,30};
     cout<<"for third array size is "<<crr.size()<<endl;
    cout<<"capacity is "<<crr.capacity()<<endl;
    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    
    int n;
    cout<<"enter the size of vector"<<endl;
    cin>>n;
    vector<int>drr(n);
    cout<<"for fourth array size is "<<drr.size()<<endl;
    cout<<"capacity is "<<drr.capacity()<<endl;
    for(int i=0;i<drr.size();i++){
        cout<<drr[i]<<" ";
    }
    cout<<endl;
     cout<<endl;
     cout<<"third array is empty or not "<<crr.empty()<<endl;
     cout<<endl;
     
     vector<int>err;
     cout<<"fifth array is empty or not "<<err.empty()<<endl;
     
    
    
}