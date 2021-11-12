#include <iostream>
using namespace std;

class Attendance {
    public:
        Attendance(){cout<<"No Attendance"<<endl;}
        Attendance(string studentname) {
            cout<<"Hello "<<studentname<<endl;
        }
};

int main()
{
    Attendance stdabs; 
    string studentname;
    cin>>studentname;
    Attendance stdpst(studentname);

	return 0;
}
