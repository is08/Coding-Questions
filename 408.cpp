#include<iostream>
using namespace std;

int main(){
    int t, D, d, P, Q;
    cin >> t;

    while(t--){
        cin >> D >> d >> P >> Q;

        int n=D/d;
        int rem=D%d;
        int ta = (d*n*(2*P + (n-1)*Q) )/2 + rem*(P+(n*Q));
        cout<<ta<<endl;
    }

    return 0;
}
