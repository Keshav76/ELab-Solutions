#include<iostream>
using namespace std;
class ReceiveMesurement{
};
class CalculateArea : public ReceiveMesurement{
    public:
    int lenght, breadth;
    void area(){
        cin>>lenght>>breadth;
        cout<<lenght*breadth;
    }
};

int main(){
    CalculateArea mt;
    mt.area();
    return 0;
}