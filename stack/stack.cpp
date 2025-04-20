#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack<int> st;
  //insertion
  st.push(3936);
  st.push(3944);
  st.push(3950);
  st.push(3946);
  st.push(3949);
  st.push(3943);
  //check the size of stack
  cout<<"size of the stack is : "<<st.size()<<endl;
  //remove top element
  st.pop();
  st.pop();
  cout<<"size of the stack is : "<<st.size()<<endl;
  //top element of the stack
  cout<<"top element is :"<<st.top()<<endl;
  if(st.empty()){
    cout<<"stack is empty"<<endl;
  }
  else{
    cout<<"stack is not empty"<<endl;
  }
  //to print the stack
  while(!st.empty()){     //the stack will print in reverse order i.e. the top of stack will print first
    cout<<st.top()<<" ";
    st.pop();
  }
  
}