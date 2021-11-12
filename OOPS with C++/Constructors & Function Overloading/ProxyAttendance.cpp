#include <iostream>
#include <string.h>
using namespace std;
class Attendance{
    char stuname[20];
public:
    Attendance(){cout<<"No Attendance"<<endl;}
    Attendance(char name[]){cout<<"Hello "<<name<<endl;}
};
int main(){
    Attendance stdabs; 
    char studentname[20];
    cin >> studentname;
    Attendance stdpst(studentname);
    return 0;
}