#include <iostream>
using namespace std;

class triangle {
    public:
        int a,b,c;
};

class isosceles : public triangle {
    public:
    void read() {
        cin>>a>>b>>c;
    }
    
    void check() {
        (a==b || b==c)? cout<<"ISOSCELES":cout<<"NOT ISOSCELES";
    }
};

int main()
{
    isosceles obj;
    obj.read();
    obj.check();

	return 0;
}
