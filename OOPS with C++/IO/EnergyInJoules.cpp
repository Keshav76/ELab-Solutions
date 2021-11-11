#include <iostream>
using namespace std;
int main(){
    int M,initialtemp,finaltemp;
    cin>>M>>initialtemp>>finaltemp;
    
    float Q;
    
    Q = M*(finaltemp - initialtemp)*4184;
    
    cout<<""<<Q;

	return 0;
}