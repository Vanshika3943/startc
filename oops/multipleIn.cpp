#include<iostream>
using namespace std;

class YouTube{
    public:
    string channel;
    void yt(){
        cout<<"heello welcome to my channel"<<endl;
    }
};

class Teacher{
    public:
    string subject;
    void teach(){
        cout<<"good morning "<<endl;
    }
};

class PW:public YouTube,public Teacher{
    public:
    int salary;
    PW(string channel,string subject,int salary){
        this->channel=channel;
        this->subject=subject;
        this->salary=salary;
    }
    void pw(){
        cout<<channel<<" "<<subject<<" "<<salary<<" "<<" welcome "<<endl;
    }
};

int main(){
    PW p1("physicsWallah","english",1000);
    p1.yt();
    p1.teach();
    p1.pw();
    
}