#include <iostream>
using namespace std;

class GoodNum {
    public:
        void check(int n) {
            int flag = 0;
            while(n!=0) {
                int temp = n%10;
                n /= 10;
                if (temp ==0) {
                    flag++;
                }
            }
            if (flag == 0) cout<<"GOOD Number";
            else cout<<flag;
        }
};

int main()
{
    int N;
    cin>>N;
    GoodNum Learning;
    Learning.check(N);
	return 0;
}
