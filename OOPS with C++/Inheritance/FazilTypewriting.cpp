#include<iostream>
using namespace std;
class staff{
    public:
    void getdata();
    void display();
};
void staff::getdata(){;}
void staff::display(){;}

class typist: public staff{
    public:
    string name; int code, speed;
    void getdata();
    void display();
};
void typist::getdata(){
    cin>>name>>code>>speed;
}
void typist::display(){
    cout<<"Name:"<<name<<endl<<"Code:"<<code<<endl<<"Speed:"<<speed<<endl;
}
int main(){
    typist t;
    t.getdata();
    t.display();
    return 0;
}