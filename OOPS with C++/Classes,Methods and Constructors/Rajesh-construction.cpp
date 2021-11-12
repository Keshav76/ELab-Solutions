#include <iostream>
using namespace std;

class CheckTriangle {
    int a,b,c;
    public:
        void readCoordinates() {
            cin>>a>>b>>c;
        }
        void isosceles() {
            if (a==b || b==c || c==a)
            cout<<"Can Form a ISOSCELES Triangle\n";
            else
            cout<<"Cant Form a ISOSCELES Triangle\n";
        }
    
};

int main()
{
    CheckTriangle consruct;
    consruct.readCoordinates();
    consruct.isosceles();

	return 0;
}
