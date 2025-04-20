#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>arr{1,2,3,4,6,7,8};
    vector<int>brr{5,7,1,3,2,9};
    vector<int>ans;
     for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                brr[j]=INT_MIN;
            }
            
        }
    }
    for(int i=0;i<arr.size();i++)
    ans.push_back(arr[i]);
    
    for(int i=0;i<brr.size();i++){
        if(brr[i]!=INT_MIN)
         ans.push_back(brr[i]);
    }
    cout<<"union of 2 arrays are"<<endl;
    
    for(int i =0 ;i< ans.size();i++){
    cout<<ans[i]<<" ";
    }
    
}