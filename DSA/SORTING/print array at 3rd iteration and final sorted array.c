#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a=*b;
    *b=temp;
}

void printArray(int arr[],int n) {
    int i;
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
}

void insertionSort(int arr[],int n) {
    int i,count=1;
    for(i=0;i<n;i++) {
        while(i>0 && arr[i-1]>arr[i]) {
            swap(&arr[i-1],&arr[i]);
            i--;
        }
        if(count==1&&i==2){
                printArray(arr,n);
                count--;
            }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n],i;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    
    insertionSort(arr, n);
    printArray(arr,n);

	return 0;
}
