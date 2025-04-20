#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>arr{1,3,3,4,6,7};
    vector<int>brr{1,3,5,9,6,8};
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                brr[j]=INT_MIN;//mark the no. to stop repeatation
                ans.push_back(arr[i]);
            }
        }
    }
    // for(int i=0;i<ans.size();i++){
    //     cout<<" "<<ans[i];
    // }
    for(auto value: ans){
        cout<<value<<" ";
    }

}