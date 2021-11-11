#include <iostream>
using namespace std;
class ReceiveMesurement{
};
class FormatMesurement : public ReceiveMesurement{
    public:
    int length, breadth;
    void display(){
        cin>>length>>breadth;
        cout<<"Length:"<<length<<" metres"<<endl<<"Breadth:"<<breadth<<" metres"<<endl;
    }
};

int main(){
    FormatMesurement mt;
    mt.display();
	return 0;
}