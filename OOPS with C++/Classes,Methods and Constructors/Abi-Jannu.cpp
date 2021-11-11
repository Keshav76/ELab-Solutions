#include <iostream>
using namespace std;

class partner {
    int sn,s;
    public:
        void get() { cin>>sn; s=sn;}
        void findpartner() { sn %= 8;
            if(sn == 1 || sn == 4) {
                if(sn+3==7)cout<<s-3<<"LB\n";
                else cout<<s+3<<"LB\n";}
            else if(sn == 2 || sn == 5) {
                if(sn+3==8)cout<<s-3<<"MB\n";
                else cout<<s+3<<"MB\n";}
            else if (sn == 3 || sn == 6) {
                if(sn+3>8)cout<<s-3<<"UB\n";
                else cout<<s+3<<"UB\n";}
            else {
               if(sn==7) cout<<s+1<<"SU\n";
               else cout<<s-1<<"SL\n";}
        }
};

int main()
{
    partner travel;
    int t; cin>>t;
    while(t--) {
        travel.get();
        travel.findpartner();
    }
	return 0;
}
