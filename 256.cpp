#include<iostream>
using namespace std;

int main(){
    int t, w1, w2, x1, x2, M;
    cin >> t;

    while(t--){
        cin >> w1 >> w2 >> x1 >> x2 >> M;
        int mini = x1 * M;
        int maxi = x2 * M;
        //cout << "mini is " << mini << " and maxi is " << maxi << " w1 - w2 is " << w2 - w1 << endl;

        if(mini <= (w2 - w1) && (w2 - w1) <= maxi){
            cout << "1" << endl;
        }
        else{
            cout << "0" << endl;
        }
    }

    return 0;
}
