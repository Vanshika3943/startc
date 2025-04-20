#include<iostream>
#include<cmath>
using namespace std;
int BinaryToDecimal(int n)
{
    int i=0;
    int decimalNo;
    while(n>0){
       int bit=n%10;
       decimalNo=bit*pow(2,i++)+decimalNo;
       n=n/10;
     }
    return decimalNo; 
}

int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<"decimal of "<<n<<" is "<<BinaryToDecimal(n);


}