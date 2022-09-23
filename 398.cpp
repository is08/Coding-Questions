#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K, count = 0, count1 = 0, flag = 0;
        cin >> N >> K;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            if (A[i] == -1)
            {
                count++;
            }
            else if (A[i] <= 1)
            {
                count1++;
            }
        }
        for (int i = 0; i < N; i++)
        {
            if (A[i] > K)
            {
                flag = 1;
            }
        }
        if (count > N / 2)
        {
            cout << "Rejected" << endl;
        }
        else if (flag == 1)
        {
            cout << "Too Slow" << endl;
        }
        else if (count1 == N)
        {
            cout << "Bot" << endl;
        }
        else
        {
            cout << "Accepted" << endl;
        }
    }
}
