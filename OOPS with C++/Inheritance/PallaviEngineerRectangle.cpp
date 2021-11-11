#include<iostream>
using namespace std;
class Area{    
};
class Perimeter{    
};
class Rectangle : private Area, private Perimeter{
    public:
    float length, breadth;
    void get_data(){
        cin>>length>>breadth;
    }
    void area_calc(){
        cout<<length*breadth<<endl;
    }
    void peri_calc(){
        cout<<2*(length+breadth)<<endl;
    }
};

int main(){
    Rectangle r;
    r.get_data();
    r.area_calc();
    r.peri_calc();    
    return 0;
}