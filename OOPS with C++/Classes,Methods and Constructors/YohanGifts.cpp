#include<iostream>
using namespace std;
class Friends{
    public:void Gifts(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=1; i<n+1; ++i){
            int temp;
            cin>>temp;
            arr[temp-1]=i;
        }
        for(int i=0; i<n; ++i)
            cout<<arr[i]<<" ";
    }
};

int main(){
    Friends Sharing;
    Sharing.Gifts();
}