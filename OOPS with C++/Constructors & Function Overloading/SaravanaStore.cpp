#include<iostream>
using namespace std;
class Salary{
    public:
    void Increment(int sal){
        cout<<sal<<endl;
    }
    void Increment(int sal, int bon){
        cout<<sal+bon<<endl;
    }    
};
int main(){
    int cursal, bonus, salary1;
    cin>>cursal>>salary1>>bonus;
    Salary empsal;
    empsal.Increment(cursal);
    empsal.Increment(cursal,bonus);
    return 0;
}