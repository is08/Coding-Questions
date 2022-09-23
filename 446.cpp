#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n, m;
    cin >> t;

    while(t--){
        cin >> n >> m;
        int f[n], c[m];

        for(int i = 0; i < n; i++){
            cin >> f[i];
        }

        for(int i = 0; i < m; i++){
            cin >> c[i];
        }

        sort(f, f + n);
        sort(c, c + m);

        int cricket = 0, football = 0, channelChanges = 0;
        bool isFootball = true;
        cout << "channel changes " << channelChanges << endl;

        while(cricket < m && football < n){

            if(f[football] < c[cricket]){
                if(isFootball == false){
                    channelChanges++;
                    isFootball = true;
                }
                football++;
            }
            else if(c[cricket] < f[football]){
                if(isFootball == true){
                    channelChanges++;
                    isFootball = false;
                }
                cricket++;
            }
        }

        if(cricket < m){
            if(isFootball == true){
                channelChanges++;
            }
        }

        if(football < n){
            if(isFootball == false){
                channelChanges++;
            }
        }

        cout << channelChanges << endl;
    }

    return 0;
}
