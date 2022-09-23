#include<iostream>
using namespace std;

using ll = long long int;

int main(){
    int t, n, m, q;
    cin >> t;

    while(t--){
        cin >> n >> m >> q;
        int row[n + 1] = {0};
        int col[m + 1] = {0};

        int x, y;

        while(q--){
            cin >> x >> y;

            row[x]++;
            col[y]++;
        }

        ll odd=0;
        ll reven=0, rodd=0, ceven=0, codd=0;

        for(int i=1;i<n+1;i++)
        {
            if(row[i]%2==0) reven++;
            if(row[i]%2==1) rodd++;
        }

        for(int i=1;i<m+1;i++)
        {
            if(col[i]%2==0) ceven++;
            if(col[i]%2==1) codd++;
        }

        odd = rodd*ceven + codd*reven;
        cout<<odd<<endl;

    }

    return 0;
}
