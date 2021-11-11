#include<iostream>
using namespace std;
class doctor{
    public:
    string docName, docDegree, patientName;
    int bedNum;
    void getedu(){
        cin>>docName>>docDegree;
    }
    void dispedu(){
        cout<<"Doctor Name:"<<docName<<endl<<"Doctorate Degree:"<<docDegree<<endl;
    }
};
class patient:public doctor{
    public:
    void getdata(){
        cin>>patientName>>bedNum;
    }
    void dispdata(){
        cout<<"Patient Name:"<<patientName<<endl<<"Bed Number:"<<bedNum<<endl;
    }
};

int main(){
    patient p;
    p.getedu();
    p.getdata();
    p.dispedu();
    p.dispdata();
    return 0;
}