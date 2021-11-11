#include<bits/stdc++.h>

using namespace std;

class Farm{
    public:float a;
    public:void Fence(){
        float n = 360/(180-a);
        if(n==(int)n)cout<<"Yes\n";
        else cout<<"No\n";
    }
};

int main(){
    Farm robot;
    int t; cin>>t;
    while(t--){
        cin>>robot.a;
        robot.Fence();
    }        
    return 0;
}