#include<iostream>
using namespace std;
class Electricity{
    public:
    float unit;
    void print_bill(){
        cin>>unit;
        if(unit>300)cout<<40+100+(unit-300)*0.6<<endl;
        else if(unit<=300 && unit>100)cout<<40+(unit-100)*0.5<<endl;
        else if(unit<=100)cout<<(unit*40)/100<<endl;
    }    
};
int main(){
    int c;cin>>c;
    Electricity e[c];

    for(int i=0;i<c;i++)
    e[i].print_bill(); 

    return 0;
}