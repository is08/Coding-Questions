#include<iostream>
using namespace std;

int main(){
    int t, d, c;
    cin >> t;

    while(t--){
        cin >> d >> c;
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;

        int sum1 = a1 + a2 + a3;
        int sum2 = b1 + b2 + b3;

        int cost_without_coupon = sum1 + sum2 + c + c;
        int cost_with_coupon = sum1 + sum2;

        if(sum1 >= 150){
            cost_with_coupon += d;
        }
        else if(sum1 < 150){
            cost_with_coupon += c;
        }

        if(sum2 >= 150){
            cost_with_coupon += d;
        }
        else if(sum2 < 150){
            cost_with_coupon += c;
        }

        cout << "cost with coupon " << cost_with_coupon << " and cost without coupon " << cost_without_coupon << endl;

        if(cost_without_coupon > cost_with_coupon){
            cout << "YES" << endl;
        }
        else if(cost_without_coupon <= cost_with_coupon){
            cout << "NO" << endl;
        }
    }

    return 0;
}
