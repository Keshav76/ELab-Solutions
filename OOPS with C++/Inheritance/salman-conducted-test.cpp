#include <iostream>
using namespace std;

class Student {
    protected:
  int marks;
};

class Test :public Student {
    protected:
    int marks_required=60;
};

class Result :public Test {
    int flag = 1;
  public:
    void accept() {
        cin>>Student::marks;
    }
    
    void check() {
        if(Test::marks_required > Student::marks )
            flag = 0;
    }
    
    void print() {
        cout<<((flag)?"You have passed":"You have failed");
    }
};

int main()
{
    Result r;
    r.accept();
    r.check();
    r.print();

	return 0;
}
