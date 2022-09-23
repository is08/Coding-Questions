#include<iostream>
using namespace std;

int main(){
    int t, x, y, a, b, k;
    cin >> t;

    while(t--){
        cin >> x >> y >> a >> b >> k;

        cout << "price of petrol " << x + k*a<< endl;;
        cout << "price of diesel " << y + k*b << endl;

        if(x + k*a == y + k*b){
            cout << "SAME PRICE" << endl;
        }
        else if((x + k*a) < (y + k*b)){
            cout << "PETROL" << endl;
        }
        else if((x + k*a) > (y + k*b)){
            cout << "DIESEL" << endl;
        }
    }

    return 0;
}
