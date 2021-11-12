#include <iostream>
using namespace std;

class Bank {
    protected:
        int arr[7]={1,5,10,50,100,200,500};
};

class CashCounting:public Bank {
    int amt;
  public:
    void get() {
        cin>>amt;
    }
    void display(){
        for(int i=6;i>=0;i--) {
            cout<<arr[i]<<": "<<amt/arr[i]<<"\n";
            amt = abs(amt-(amt/arr[i])*arr[i]);
        }
    };
};

int main()
{
    CashCounting obj;
    obj.get();
    obj.display();

	return 0;
}
