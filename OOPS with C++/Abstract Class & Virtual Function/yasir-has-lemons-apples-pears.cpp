#include <bits/stdc++.h>
using namespace std;

class Cooking {
  public:virtual void recipe()=0;  
};

class FruitsRatio:public Cooking {
    int l,a,p;
  public:void recipe() {
      cin>>l>>a>>p;
      int c = min(min(a/2,p/4),l);
      cout<<7*c;
  }
};

int main()
{
    FruitsRatio obj;
    obj.recipe();

	return 0;
}
