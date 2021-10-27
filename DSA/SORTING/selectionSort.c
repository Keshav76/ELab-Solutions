#include <stdio.h>

void swap(int *xp,int *yp) {
    int temp = *xp;
    *xp=*yp;
    *yp=temp;
}

void selectionSort(int arr[],int n) {
    int i,j,k;
    for(i=0;i<n;i++){
        long long int min = 1e9+1;
        for(j=i;j<n;j++) {
            if(min>arr[j]) {
                min = arr[j];
                k=j;
            }
        }
        swap(&arr[k],&arr[i]);
    }
}

void printArray(int arr[],int size) {
    int i;
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}

int main()
{
    int n; scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    selectionSort(a,n);
    printArray(a,n);

	return 0;
}
