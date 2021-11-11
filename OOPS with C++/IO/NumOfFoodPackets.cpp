#include <iostream>
using namespace std;
int main(){
    int alvqntoffood,messcnt,dividedqnt,remfood;
    cin>>alvqntoffood>>messcnt;
    
    dividedqnt = alvqntoffood/messcnt;
    remfood = alvqntoffood%messcnt;
    
    cout<<dividedqnt<<" "<<remfood;
	return 0;
}