#include <iostream>
using namespace std;
class student{
    public:
    int regNo, m1, m2, m3, m4, m5;
    void get(){
        cin>>regNo;
        cin>>m1>>m2>>m3>>m4>>m5;
    }
    
};
class laboratory{
    public:
    int lm;
    void labmark(){
        cin>>lm;
    }
};
class marklist:public student,public laboratory{
    public:
    void display(){
        cout<<regNo<<endl;
        cout<<m1+m2+m3+m4+m5+lm<<endl;
        float temp =(float)(m1+m2+m3+m4+m5+lm)/6;
        cout<<(int)temp*2<<endl;
    }
};


int main()
{
    marklist obj;
    obj.get();
    obj.labmark();
    obj.display();
	return 0;
}