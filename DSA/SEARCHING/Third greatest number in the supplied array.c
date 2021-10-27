#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void thirdLargest(int arr[],int arr_size) {
    printf("The third Largest element is %d", arr[2]);
}

int main() {
    int n;
    scanf("%d",&n);
    
    int arr[n];
    int i, j, k;
    for (i = 0; i<n; i++)
        scanf("%d", &arr[i]);
    
    for (k = 0; k < n; k++) {
        for (j = n-1-k; j >= 1; j--) {
            if (arr[j] > arr[j-1]) {
                swap(&arr[j], &arr[j-1]);
            }
        }
    }
    
    thirdLargest(arr, n);

	return 0;
}
