#include <iostream>
using namespace std;

class Farm{
    int t,a;
    public:void Fence() {
        cin>>t;
        while(t--){
            cin>>a;
            if(360%(180-a)==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
};

int main()
{
    Farm robot;
    robot.Fence();

	return 0;
}
