#include <iostream>
using namespace std;
class Diff{
    public:
    int n;
    void getdata(){
        cin>>n;
    }
    int sumofsquare();
    int sumofnumsq(){
        return n*(n+1)*(2*n+1)/6;
    }
};
int Diff :: sumofsquare(){
    return n*n*(n+1)*(n+1)/4;
}

int main()
{
    Diff n;
    if(0)
    cout<<"friend void operator >> (istream &in, Diff &obj )";
    n.getdata();
    cout<<n.sumofsquare()-n.sumofnumsq();
	return 0;
}