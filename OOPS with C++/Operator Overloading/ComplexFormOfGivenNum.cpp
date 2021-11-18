#include <iostream>
using namespace std;
class complex
{
    private:
      float real;
      float imag;
    public:
       complex() {cin>>real>>imag;}
       complex operator-(complex ob)
       {
           complex t;
           t.real = real - ob.real;
           t.imag = imag - ob.imag;
           return t;
       }

       void output()
       {
           if(imag < 0)
               cout<< real << imag << "i"<<endl;
           else
               cout<< real << "+" << imag << "i"<<endl;
       }
};
int main()
{
    complex c1, c2;
    c1.output();
    c2.output();
    (c1 - c2).output();
    return 0;
}