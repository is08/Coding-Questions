#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int totalTax = 0;
        int lowerBound = 0, upperBound = 250000;
        double rate = 0;

        while(n - lowerBound > 0){
            if(n - upperBound >= 0){
                totalTax += (rate/100) * 250000;
            }
            else if(n - upperBound < 0){
                totalTax += (rate/100) * (n - lowerBound);
            }

            //cout << "tax for " << lowerBound << " & " << upperBound << " is " << totalTax << endl;
            lowerBound += 250000;
            upperBound += 250000;
            rate += 5;
        }

        cout << n - totalTax << endl;
    }

    return 0;
}
