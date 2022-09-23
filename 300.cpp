#include<iostream>
using namespace std;

int main(){
    int t, D, d, A, B, C;
    cin >> t;

    while(t--){
        cin >> D >> d >> A >> B >> C;

        int tot_distance = D * d;

        if(tot_distance >= 10 && tot_distance < 21){
            cout << A << endl;
        }
        else if(tot_distance >= 21 && tot_distance < 42){
            cout << B << endl;
        }
        else if(tot_distance >= 42){
            cout << C << endl;
        }
        else{
            cout << 0 << endl;
        }
    }

    return 0;
}
