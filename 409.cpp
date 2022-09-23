#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long int n, m;

        cin >> n >> m;

        long long int numerator, denominator;

        denominator = n * m;
        numerator = denominator / 2;

        if(n == 1 && m == 1){
            cout << "0/1" << endl;
        }
        else if(denominator == numerator*2){
            cout << "1/2" << endl;
        }
        else{
            cout << numerator << "/" << denominator << endl;
        }
    }

    return 0;
}
