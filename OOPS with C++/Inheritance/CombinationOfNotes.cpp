#include <iostream>
using namespace std;
class Bank{
public:
    int amount;
    void get() { cin >> amount; }
};
class CashCounting : public Bank{
public:
    int note500, note200, note100, note50, note10, note5, note1;
    void display(){
        int a[7] = {500, 200, 100, 50, 10, 5, 1};
        int i, temp;

        temp = amount;

        for (i = 0; i < 7; i++){
            cout << a[i] << ": " << temp / a[i] << endl;
            temp = temp % a[i];
        }
    }
};

int main(){
    CashCounting obj;
    obj.get();
    obj.display();
    return 0;
}