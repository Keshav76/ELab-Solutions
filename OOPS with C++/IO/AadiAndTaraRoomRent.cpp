#include<bits/stdc++.h>

using namespace std;

int main(){
    int month,numofdays;
    float roomrent,renttopay;
    cin>>month>>roomrent>>numofdays;
    float temp = numofdays;
    if(month == 4 || month == 5){
        roomrent -= 0.2*roomrent;
        renttopay = roomrent * temp;
    }
    else
        renttopay = roomrent * temp;

    cout<<"Rs."<<fixed<<setprecision(2)<<renttopay;
    
    return 0;
}