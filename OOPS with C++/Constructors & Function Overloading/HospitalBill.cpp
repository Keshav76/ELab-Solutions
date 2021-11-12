#include<iostream>
using namespace std;
class Hospital{
    public:
    void bill(float medicine, float days){
        cout<<medicine*days<<endl;
    }
    void bill(int room, float days){
        cout<<room*(int)days<<endl;
    }
};
int main(){
    Hospital ob;
    float mdeicinebill, days;
    int roomrent, days2;
    cin>>mdeicinebill>>days;
    cin>>roomrent>>days2;
    ob.bill(mdeicinebill,days);
    ob.bill(roomrent,days);    
    return 0;
}