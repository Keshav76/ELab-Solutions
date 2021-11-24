#include<bits/stdc++.h>
void dummy(){;}
using namespace std;
int main(){
    int t,n,a[10002],b[10002];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];
        int count = 0;
        for(int i=0; i<n; i++)           
            if((i==0 && b[0]<=a[0]) || (b[i]<=a[i]-a[i-1]))
                count++;
        
        cout<<count<<endl;
    }
