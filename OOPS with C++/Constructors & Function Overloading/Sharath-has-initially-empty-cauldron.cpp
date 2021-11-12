#include <bits/stdc++.h>
using namespace std;

int max(int a,int b,int c) {
   if(a==c)return b;
    else return a;
}

int min(int a,int b) {
    if(a>b)return b;
    else return a;
}

int min(int a,int b,int c) {
    return 0;
}

int max(int a, int b, int c, int d) {
    return 0;
}

int solve() {
    int k; cin>>k;
    int a = min(k,100-k);
    int c = max(k,100-k,a);
    int ans = 100/__gcd(a,c);
    return ans;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--) cout<<solve()<<endl;
	return 0;
}
