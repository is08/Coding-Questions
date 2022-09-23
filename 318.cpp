#include<iostream>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;
        int h[n], numberOfSteps = 0;

        for(int i = 0; i < n; i++){
            cin >> h[i];
        }

        if(h[0] > k){
            numberOfSteps += (h[0] - 1) / k;
        }

        for(int i = 1; i < n; i++){
            if(h[i] - h[i - 1] > k){
                numberOfSteps += (h[i] - h[i - 1] - 1) / k;
            }
        }

        cout << numberOfSteps << endl;
    }

    return 0;
}
