#include <bits/stdc++.h>
using namespace std;

class Date {
  protected:
    int days;
};

class check : public Date {
    string arr[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
  public:
    void day() {
        cin>>days;
    }
    void display() {
        cout<<arr[days-1];
    }
    
};

int main()
{
    check obj;
    obj.day();
    obj.display();

	return 0;
}
