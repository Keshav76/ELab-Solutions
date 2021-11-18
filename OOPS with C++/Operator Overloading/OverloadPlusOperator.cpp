//Numerator and Denominator
#include<iostream>
using namespace std;
class Fraction
{
    public:
    int num,den;

Fraction()
{
    num=0;
    den=0;
}
void getinput()
{
    cin>>num>>den;
}
Fraction operator +(Fraction obj)
{
    Fraction temp;
    temp.num=(num*obj.den)+(den*obj.num);
    temp.den=den*+obj.den;
    return temp;
}
};
int main()
{
    Fraction f1,f2,add;
    f1.getinput();
    f2.getinput();
    add=f1+f2;
    if(add.den==0)
    cout<<"Error";
    else if(add.num%add.den == 0)
    cout<<add.num/add.den;
    else
    cout<<add.num<<"/"<<add.den;
    return 0;
}