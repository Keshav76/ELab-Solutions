#include <iostream>
using namespace std;

class Olympic {
  public:
    void distance(int d1, int d2) {
        cout<<d1+d2<<" meters"<<endl;
    }
    void distance(int d1,int d2,int d3) {
        cout<<d1+d2+d3<<" meters"<<endl;
    }
};

int main()
{
    int D1,D2,D3,D4,D5;
    cin>>D1>>D2>>D3>>D4>>D5;
    Olympic Medal;
    Medal.distance(D1,D2);
    Medal.distance(D3,D4,D5);

	return 0;
}
