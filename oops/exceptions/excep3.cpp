#include<iostream>
using namespace std;

//for creating our own exception 
class InvalidAmountError:public runtime_error{
    public:
    InvalidAmountError(const string &msg):runtime_error(msg){};
    

};

class BankAccount{
    string name;
    int balance, acc_no;
    public:
    BankAccount(string n,int b, int ac_no){
        this->name=n;
        this->balance=b;
        this->acc_no=ac_no;
    }

    void deposit(int amount){
        if(amount<0){
            throw InvalidAmountError("invalid deposit");
        }
        balance+=amount;
        cout<<"after deposit : "<<balance<<endl;
    }

    void withdraw(int amount){
        if (amount>0&&amount<=balance)
        {
            balance-=amount;
            cout<<"after withdraw : "<<balance<<endl;
        }
        else{

        }
        throw "insufficient balance";
    }
};

int main(){
    BankAccount b1("avi",2000,3456789);
    try{
        b1.deposit(100);
        b1.deposit(-1);
    }
    //we can have many catch blocks
    catch(const InvalidAmountError &e){
        cout<<"exception : "<<e.what();
    }
    catch (const bad_alloc &e){
        cout<<"exception occured";
    }
    //defualt
    catch(...){
        cout<<"Exception";
    }

    

}
