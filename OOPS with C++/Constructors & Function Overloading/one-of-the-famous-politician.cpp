#include <bits/stdc++.h>
using namespace std;

class Hospital {
  public:
    void bill(int mdeicinebill, int days) {
        cout<<mdeicinebill*days<<endl;
    }
    void bill(string roomrent, int day) {
        cout<<stoi(roomrent)*day<<endl;
    }
};

int main()
{
    int mdeicinebill,days; string roomrent;
    cin>>mdeicinebill>>days;
    Hospital ob;
    cin>>roomrent>>days;
    
    ob.bill(mdeicinebill,days);
    ob.bill(roomrent,days);

	return 0;
}
