#include <iostream>
using namespace std;

class Store {
    public:
        void itemcount(int id) {
           cout<<id<<"\n";
        }
        void itemcount(int totalavl,int consumed) {
            cout<<totalavl-consumed;
        }
};

int main()
{
    Store purchase;
    
    int id; 
    cin>>id;
    purchase.itemcount(id);
    
    int totalavl, consumed;
    cin>>totalavl; cin>>consumed;
    purchase.itemcount(totalavl,consumed);

	return 0;
}
