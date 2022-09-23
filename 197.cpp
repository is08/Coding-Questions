#include<iostream>
using namespace std;

int main(){
    int test, x, y, xr, yr, d;
    cin >> test;

    while(test--){
        cin >> x >> y >> xr >> yr >> d;

        float d1 = (float)x / xr;
        cout << "food will last " << d1 << endl;
        float d2 = (float)y / yr;
        cout << "water will last " << d2 << endl;

        float dr = min(d1, d2);
        cout << "min of food and water is " << dr << endl;

        if(d < dr){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }

    return 0;
}
