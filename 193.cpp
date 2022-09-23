#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        float price[n], quantity[n], discount[n];

        for(int i = 0; i < n; i++){
            cin >> price[i] >> quantity[i] >> discount[i];
        }


        float sum = 0, inc_price, dec_price, new_dec_price;

        for(int i = 0; i < n; i++){
            inc_price = price[i] + (price[i] * (discount[i] / 100));
            cout << discount[i] / 100 << endl;
            cout << "increased price is " << inc_price << endl;
            dec_price = inc_price - (inc_price * (discount[i] / 100));
            cout << "decreased price is " << dec_price << endl;
            new_dec_price = price[i] - dec_price;
            cout << "loss is " << new_dec_price << endl;
            sum = sum + new_dec_price * quantity[i];
        }

        cout << fixed << sum << setprecision(10) << endl;

    }

    return 0;
}
