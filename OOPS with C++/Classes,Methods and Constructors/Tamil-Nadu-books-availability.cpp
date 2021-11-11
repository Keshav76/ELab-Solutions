#include <iostream>
using namespace std;

class library{
    int roll,book;
    string name;
  public:
    library(int r,string n,int code){
        roll = r;
        name = n;
        book = code;
    }
    
    void display(){
        cout<<"Roll No:"<<roll<<endl;
        cout<<"Name of the Student:"<<name<<endl;
        cout<<"Code of Book Accessed:"<<book<<endl;
    }
};

int main()
{
    int r,code; string n;
    cin>>r>>n>>code;
    library lib1(r,n,code);
    cin>>r>>n>>code;
    library lib2(r,n,code);
    lib1.display();
    lib2.display();

	return 0;
}
