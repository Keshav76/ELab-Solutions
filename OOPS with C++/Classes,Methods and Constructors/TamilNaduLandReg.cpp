#include<iostream>
using namespace std;
class house{
    public:
    int hno;
    string houseName, cty, state;
    int n;
    int arr[100][3];
    void input();
    void display();
};
void house::input(){
    cin>>houseName;
    cin>>hno>>cty>>state;
    cin>>n;
    for(int i=0; i<n; i++)
    for(int j=0; j<3; j++)cin>>arr[i][j];        
}
void house::display(){
    cout<<"House name="<<houseName<<endl;
    cout<<"House No="<<hno<<endl;
    cout<<"City="<<cty<<endl;
    cout<<"State="<<state<<endl;
    for(int i=0; i<n; i++){
        cout<<"Detail of Room "<<i+1<<endl;
        cout<<"Length="<<arr[i][0]<<endl;
        cout<<"Breadth="<<arr[i][1]<<endl;
        cout<<"Height="<<arr[i][2]<<endl;        
    }
}
int main(){
    house new1;
    new1.input();
    new1.display();
    return 0;
}