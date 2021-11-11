#include<bits/stdc++.h>
using namespace std;
class passPal{
    public:
    int n; string s;
    void count(){
        cin>>n>>s;
    }

};
class arbitrary:public passPal{
    public:
    void goal(){
        sort(s.begin(), s.end());
        cout<<s;
    }
};

int main(){
    arbitrary obj;
    obj.count();
    obj.goal();    
    return 0;
}