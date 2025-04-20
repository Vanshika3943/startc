#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>arr{1,2,3,4,6,7,8};
     int sum;
     cout<<"enter the sum : ";
     cin>>sum;
     for(int i=0;i<arr.size();i++){
         for(int j=i+1;j<arr.size();j++){
             for(int k=j+1;k<arr.size();k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                   cout<<"triplet is"<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                }   
             }
         }
     }
    
}