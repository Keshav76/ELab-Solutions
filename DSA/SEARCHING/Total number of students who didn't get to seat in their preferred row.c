#include <stdio.h>

void input(int *y, int *m, int *k){
    scanf("%d %d %d",y, m, k);
}

int main() {
    int y, m, k;
    input(&y, &m, &k);
    
    int a[y], b[500] = {0};
    int i;
    for(i = 1; i<=y; i++) {
        scanf("%d", &a[i]);
    }
    
    int count = 0, x = 1, extra = m*k;
    y++;
    
    while(x!=y) {
        if (a[x] <= m) {
            if (b[a[x]] < k && extra > 0) {
                b[a[x]]++;
                extra--;
            }
            else if (b[a[x]+1] < k && extra >0) {
                b[a[x]+1]++;
                count++;
                extra--;
            }
            else
                count++;
        }
        else if(x <= m*k) extra--;
        x++;
    }
    
    printf("%d", count);
    return 0;
}
