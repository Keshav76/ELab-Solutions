#include <stdio.h>

void sort(int a[],int n) {
    int i,j;
    for(i=0;i<n-1;i++) {
        for(j = i+1; j<n; j++) {
            if(a[i] < a[j]) {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main()
{
    int t; scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d", &n, &k);
        
        int a[n],i;
        for(i=0; i<n; i++) scanf("%d", &a[i]);
        
        sort(a,n);
        if(a[0] <= k) printf("-1\n");
        else printf("%d\n", a[0]-k);
    }
	return 0;
}
