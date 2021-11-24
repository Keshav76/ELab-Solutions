#include <iostream>
using namespace std;
int main()
{
    int n, m, A[101][101], P[101][101], count = 0, i, j, k;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> P[i][j];
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> A[i][j];
            if (A[i][j] != 0)
                count++;
        }
    }
    cout << count << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (A[i][j] != 0)
            {
                k = (P[i][j] - A[i][j]);
                cout << i << " " << j << " " << i << " " << j << " " << k << endl;
            }
        }
    }
    return 0;
}