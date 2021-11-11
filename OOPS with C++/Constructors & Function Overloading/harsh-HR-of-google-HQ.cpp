#include <iostream>
using namespace std;

class Appraisal {
    int sal;
  public:
    Appraisal(){sal=30000;cout<<"Old Salary:"<<sal<<endl;}
    Appraisal(int sal) {
        cout<<"New Salary:"<<sal<<endl;
        cout<<"You have the Hike of Rs."<<sal-30000;
    }
};

int main()
{
    Appraisal oldsalary;
    int sal; 
    cin>>sal;
    Appraisal newsalary(sal);

	return 0;
}
