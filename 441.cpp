#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int T[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> T[i][j];
        }
    }

    long long int dist,ans;
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                dist = T[i][k] + T[k][j];
                if(T[i][j] > dist)
                {
                    T[i][j] = dist;
                }
            }
        }
    }

    long long int m;
    cin>>m;

    long long x,y,z;

    for(int i=0;i<m;i++)
    {
        cin>>x>>y>>z;
        dist = T[x][y]+T[y][z];
        ans = dist-T[x][z];
        cout<<dist<<" "<<ans;
        cout<<'\n';
    }


    return 0;
}
