#include<iostream>

using namespace std;

class Building{
    public:
    int length, width, ratepersqfeet;    
    void calculateCost(){
        cout<<"Cost of the Building : "<<length*width*ratepersqfeet<<endl;
    }
    void determineSuitability(){
        int temp = length - width;
        if(temp<=10 && temp>=-10)
        cout<<"Stability : Suitable"<<endl;
        else 
        cout<<"Stability : Not Suitable"<<endl;
    }
};
int main(){
    Building construction;
    cin>>construction.length>>construction.width>>construction.ratepersqfeet; 
    construction.calculateCost();construction.determineSuitability();      
    return 0;
}