#include <iostream>
using namespace std;
int main()
{
    int l,w,h;
    cin>>l;
    cin>>w>>h;
    if(w>=l && h>=l){
        if(w==h)cout<<"ACCEPTED";
        else cout<<"CROP IT";
    }
    else if(w<l && h>=l) cout<<"UPLOAD ANOTHER";
    else cout<<"UPLOAD ANOTHER";

	return 0;
}