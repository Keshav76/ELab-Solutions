#include <stdio.h>

void sort(int a[],int n) {
    int i,j;
    for(i=0;i<n-1;i++) {
        for(j=0;j<n-1-i;j++) {
            if(a[j] < a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int t; scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d", &n);
        
        int a[n],i;
        for(i=0; i<n; i++) scanf("%d", &a[i]);
        
        sort(a,n);
        printf("%d\n", a[0]*a[1]);
    }
	return 0;
}
