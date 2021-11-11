#include<iostream>
using namespace std;
class Salary{
    public:
    int deftsalary=0;
    Salary(){deftsalary=10000;cout<<deftsalary<<endl;}
    Salary(int sal){cout<<sal<<endl;}
};
int main(){
    Salary sal1;
    int sal=0; cin>>sal;
    Salary ExpectedSalary(sal);
    return 0;
}