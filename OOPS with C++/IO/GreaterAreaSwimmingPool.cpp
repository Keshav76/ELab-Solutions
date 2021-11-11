#include <iostream>
using namespace std;
int main(){
    int r,s,cpool,spool;
    cin>>r>>s;
    cpool = 3.14*r*r;
    spool = s*s;
    if(cpool>spool)
        cout<<"I Prefer Centre 1";
    else
        cout<<"I Prefer Centre 2";
        
	return 0;
}