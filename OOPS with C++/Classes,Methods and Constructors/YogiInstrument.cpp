#include<bits/stdc++.h>
using namespace std;
class LoveForMusic{
    public:
    int n,k; int sum=0;int count=0;
    int arr[100];
    int newarr[100];
    public:void Instruments(){
        cin>>n>>k;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            newarr[i]=arr[i];
        }
        sort(newarr,newarr+n); 
        for(int i=0; i<n; i++){
            sum+=newarr[i];
            if(newarr[i]<k){
                count++; continue;
            }                
            else if(newarr[i]>=k)exit(0);
        }
        cout<<count<<endl;
        for(int i=0; i<count; i++){
            for(int j=0; j<n; j++){
                if(arr[j]==newarr[i]){
                    cout<<j+1<<" ";
                    exit(0);
                }
            }
        }
    }
};

int main(){
    LoveForMusic Learning;
    Learning.Instruments();    
    return 0;
}