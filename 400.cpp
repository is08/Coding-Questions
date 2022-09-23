#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m, k;
        cin >> n >> m >> k;

        double quotient = (double) n/k;


        if(quotient <= m){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }

    }

    return 0;
}
