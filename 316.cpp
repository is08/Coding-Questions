#include<iostream>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;
        int p[n], minimumPos = -1, minimumSteps = 10e5;

        for(int i = 0; i < n; i++){
            cin >> p[i];
        }

        for(int i = 0; i < n; i++){
            if(k % p[i]== 0){
                if(minimumSteps > k/p[i]){
                    minimumSteps = k / p[i];
                    minimumPos = p[i];
                    //cout << "minimum steps is " << minimumSteps << " and minimum position is " << minimumPos << endl;
                }
            }
        }

        cout << minimumPos << endl;
    }

    return 0;
}
