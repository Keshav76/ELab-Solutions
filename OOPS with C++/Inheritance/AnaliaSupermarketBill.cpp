#include<iostream>
using namespace std;
class market{
};
class customer:public market{
    public:
    int item1, item2, item3, item4, item5;
    void items(){
        cin>>item1>>item2>>item3>>item4>>item5;
    }
    void buy(){
        int temp = item1+item2+item3+item4+item5;
        cout<<"Subtotal=$"<<temp<<endl;
        float temp2 = (float)6*temp/100;
        cout<<"Tax=$"<<temp2<<endl;
        cout<<"Total=$"<<temp+temp2<<endl;

    }
};

int main(){
    customer c;
    c.items();
    c.buy();    
    return 0;
}