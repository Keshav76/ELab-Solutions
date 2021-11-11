#include <iostream>
using namespace std;

class TollBooth{
    public:
     double ans = 0.0;
     void payingcar(double p) {
         ans += p;
     }
     void nonpayingcar() {}
};

int main()
{
    TollBooth obj;
    int t;
    cin>>t;
    int n = t;
    
    while(t--) {
        string VehicleNo;
        double TollAmt;
        cin>>VehicleNo>>TollAmt;
        
        obj.nonpayingcar();
        obj.payingcar(TollAmt);
    }
    cout<<n<<endl;
    cout<<obj.ans<<endl;
    
	return 0;
}
