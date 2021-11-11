#include<iostream>
using namespace std;
class Assignement{
    public:
    int num;
    void get(){
        cin>>num;
    }
};
class Student:public Assignement{
    public:
    void display(){
        int temp = num, count = 0;
        while(temp){
            count++;
            temp /= 10;
        }
        cout<<count<<endl;
    }
};

int main(){
    Student obj;
    obj.get();
    obj.display();
    return 0;
}