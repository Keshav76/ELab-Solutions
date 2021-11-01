#include <stdio.h>
#define int long long int

int binarySearch(int low,int high,int key) {
    int mid, iterator = 0;
    while(iterator <= high) {
        mid = (iterator + high)/2;
        if(((low*(low+1)) + (mid*(mid+1))) == key)
            return 1;
        else if(((low*(low+1)) + (mid*(mid+1))) > key)
            high = mid - 1;
        else
            iterator = mid + 1;
    }
    return 0;
}

signed main()
{
    int n, flag = 0, i;
    scanf("%lld", &n);
    
    for(i = 1; i < n; i++) {
      if(binarySearch(i*(i+1), n*(n-1), 2*n)==1) {
          flag = 1;
          break;
      }
    }
      
    (flag == 0)? printf("NO"):printf("YES");
	return 0;
}
