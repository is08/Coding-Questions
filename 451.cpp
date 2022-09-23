#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int x, y, ans = 0;
        cin >> x >> y;

        if (x > y){
            swap(x, y);
        }

        if (x == 0)
        {
            cout << ((y == 0) ? y : -1) << '\n';
        }
        else{

            while (x < y)
            {
                x *= 2;
                ans++;
            }
        }

        cout << ans + y << '\n';
    }
}

