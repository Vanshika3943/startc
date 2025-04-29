#include<iostream>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r){
        title=s;
        rating=r;
    }
    void display();
};

class CWHvideo:public CWH{
    protected:
    float vid_len;
    public:
    CWHvideo(string s, float r, float v):CWH(s,r){
        vid_len=v;
    }
    void display(){
        cout<<"the video title is : "<<title<<endl;
        cout<<"Ratings : "<<rating<<endl;
        cout<<"lenth of video : "<<vid_len<<endl;
    }
};

class CWHtext:public CWH{
    protected:
    int words;
    public:
    CWHtext(string s,float r, int wc):CWH(s,r){
        words=wc;
    }
    void display(){
        cout<<"Text title : "<<title<<endl;
        cout<<"rating : "<<rating<<endl;
        cout<<"word count is : "<<words<<endl;
    }
};

int main(){
    string title;
    float rating , vid_len;
    int word;

    title="open tutorial" ;
    rating=4.5;
    vid_len=5.56;
    CWHvideo objvid(title,rating,vid_len);
    objvid.display();

    title="open tutorial document" ;
    rating=4.7;
    word=556;
    CWHvideo objtext(title,rating,word);
    objtext.display();

    // CWH* pin[2];
    // pin[0]=&objvid;
    // pin[1]=&objtext;

    // pin[0]->display();
    // pin[1]->display();


    
    return 0;
}