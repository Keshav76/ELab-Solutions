#include <iostream>
using namespace std;
int main(){
    long int n, count = 0, temp;
    cin>>n;
    
    while(n>0){
        temp = n%10;
        count = count*10 + temp;
        n /= 10;
    }
    
    n = count;
    
    while(n>0){
        temp = n%10;
        
        switch(temp){
            case 1:
                cout<<"One ";
                break;
            
            case 2:
                cout<<"Two ";
                break;
            
            case 3:
                cout<<"Three ";
                break;
            
            case 4:
                cout<<"Four ";
                break;
        
            case 5:
                cout<<"Five ";
                break;
            
            case 6:
                cout<<"Six ";
                break;
            
            case 7:
                cout<<"Seven ";
                break;
            
            case 8:
                cout<<"Eight ";
                break;
            
            case 9:
                cout<<"Nine ";
                break;
            
            case 0:
                cout<<"Zero ";
                break;
            
            default:
                break;
            
        }
        n /= 10;
    }
	return 0;
}