#include <iostream>
using namespace std;

class GATE {
  public:virtual void ProblemSolving()=0;  
};

class Preparation:public GATE {
    int t;
  public:void ProblemSolving() {
      cin>>t;
      while(t--){
          int a,c=2; cin>>a;
          while(c<a) c*=2;
          cout<<a*(a+1)/2-(2*c-2)<<"\n";
      }
  }
};

int main()
{
    Preparation obj;
    obj.ProblemSolving();

	return 0;
}
