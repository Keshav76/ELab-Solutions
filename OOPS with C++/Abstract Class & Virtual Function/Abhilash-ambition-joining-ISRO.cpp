#include <iostream>
using namespace std;

class ISRO {
  public:virtual void ProblemSolving()=0;  
};

class Preparation:public ISRO {
    int k,a,b,ans;
    public:void ProblemSolving() {
        cin>>k>>a>>b;
        ans = (b/k)-(a/k);
        cout<<ans+1;
    }
};

int main()
{
    Preparation obj;
    obj.ProblemSolving();

	return 0;
}
