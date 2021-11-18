#include <iostream>
using namespace std;
class Scrum{
    public:
    int n;
    Scrum(int h)
    {
        n=h;
    }
    Scrum operator -- (int){
        Scrum T(int h);
        --n;
        return 1;
    }
    void display(){
        int res=1;
        for(int i=1;i<=n;i++){
            res=res*i;
        }
        cout<<res;
    }
};
int main()
{
    int n;
    cin>>n;
    Scrum T(n);
    T--;
    T.display();
	return 0;
}