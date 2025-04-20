#include<iostream>
using namespace std;
char getGrade(int n){
    if(n>=90&&n<=100)
    return 'A';
    else if(n>=80&&n<90)
    return 'B';
    else if(n>=60&&n<80)
    return 'C';
    else
    return 'D';
}

int main(){
    int n;
    cout<<"enter the marks of student : ";
    cin>>n;
    cout<<"the grade is"<<getGrade(n);
}