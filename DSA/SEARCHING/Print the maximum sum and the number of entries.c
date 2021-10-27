#include <stdio.h>
#define int long long int

void solve(int a[], int i, int n) {
    while(i <= n) {
        scanf("%lld",&a[i]);
        i++;
    }
}

signed main()
{
    int num; scanf("%lld", &num);
    int a[num];
    solve(a,1, num);
    
   int cnt = 0, count = 0;
    
    while(num) {
        if (cnt + a[num] >= cnt){
            cnt += a[num];
            count++;
        }
        num--;
    }
    
    if(cnt==0) {
        cnt = a[0];
    }
    
    printf("%lld %lld",cnt, count);
    
	return 0;
}
