#include <iostream>
using namespace std;

class Student {
  public:
    void Identity(string name, int id) {
        cout<<name<<" "<<id<<"\n";
    }
    void Identity(int id, string name) {
        cout<<name<<" "<<id<<"\n";
    }
};

int main()
{
    Student Details;
    
    string name; int id;
    cin>>name; cin>>id;
    Details.Identity(name,id);
    
    cin>>id; cin>>name;
    Details.Identity(id,name);

	return 0;
}
