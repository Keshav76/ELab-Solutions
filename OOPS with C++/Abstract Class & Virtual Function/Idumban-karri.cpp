#include <iostream>
using namespace std;

class Problem {
  public:virtual void Divisor()=0;  
};

class Calculation:public Problem {
    int n,k,i,count=0;
  public:void Divisor() {
      cin>>n>>k;
      for (i = 1; i <= n; i++) {
          if(n%i==0)count++;
          if(count==k) break;
      }
      cout<<((count==k)?i:-1);
  }
};

int main()
{
    Calculation obj;
    obj.Divisor();

	return 0;
}
