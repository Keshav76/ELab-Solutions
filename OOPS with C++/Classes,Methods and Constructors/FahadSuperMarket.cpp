#include<iostream>
using namespace std;
class ITEM{
    public:
    int largestPrice, n;
    float sumOfPrices=0;
    int arr1[100];
    float arr2[100];
    void input(){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr1[i]>>arr2[i];
        }
    }
    void sum(){
        for(int i=0; i<n; i++){
            sumOfPrices+=arr2[i];
        }
    }
    void largest(){
        largestPrice=arr2[0];
        for (int i = 0; i < n; i++){
            if(arr2[i]>largestPrice)largestPrice=arr2[i];
        }        
    }
    void displayitems(){
        cout<<"Largest Price="<<largestPrice<<endl;
        cout<<"Sum of Prices="<<sumOfPrices<<endl;
        cout<<"Code and Price\n";
        for(int i=0; i<n; i++){
            cout<<arr1[i]<<" and "<<arr2[i]<<endl;
        }
    }
};
int main(){
    ITEM order;
    order.input();
    order.sum();
    order.largest();
    order.displayitems();    
    return 0;
}