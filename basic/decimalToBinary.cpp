#include<iostream>
#include<cmath>
using namespace std;
// int decimalToBinary(int n){      //division method
//     int binaryNo=0;
//     int i=0;
//     while(n>0){
//         int bit=n%2;
//         binaryNo=bit*pow(10,i++)+binaryNo;
//         n=n/2;
//     }
//     return binaryNo;
// }
int DecimalToBinary(int n){       //bitwise method
    int i=0;
    int binaryNo;
    while(n>0){
       int bit=(n&1);
       binaryNo=bit*pow(10,i++)+binaryNo;
       n=n>>1;
       
    }
    return binaryNo;
}

int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<"binary of "<<n<<" is "<<DecimalToBinary(n);


}