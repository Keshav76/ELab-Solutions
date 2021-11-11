#include <iostream>
using namespace std;
int main(){
    int nooffamilymembers;
    cin>>nooffamilymembers;
    
    for(int i=nooffamilymembers; i>0; i--){
        for(int j=0; j<i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
	return 0;
}