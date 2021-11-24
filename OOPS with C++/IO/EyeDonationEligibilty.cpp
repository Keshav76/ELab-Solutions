#include <iostream>
using namespace std;
int main()
{
    int people_age,weight;
    cin>>people_age>>weight;
    if(people_age>=18 && weight>=40)cout<<"Eligible for Donation";
    else cout<<"Not Eligible for Donation";

	return 0;
}