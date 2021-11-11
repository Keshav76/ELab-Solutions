#include <iostream>
using namespace std;

class Complex {
    int r1,i1,r2,i2,r,i;
  public:
     Complex(){cin>>r1>>i1;cin>>r2>>i2;}
    
    void addcomplex(){
        r = r1+r2;
        i = i1+i2;
    }
    
    void displaycomplex(){
        cout<<r1<<"+"<<i1<<"i"<<endl;
        cout<<r2<<"+"<<i2<<"i"<<endl;
        cout<<r<<"+"<<i<<"i"<<endl;
    }
};

int main()
{
    Complex calculate;
    calculate.addcomplex();
    calculate.displaycomplex();

	return 0;
}
