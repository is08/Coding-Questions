#include<iostream>
using namespace std;

int main(){
    int test;
    long long int x, y, k, sum;
    cin >> test;

    while(test--){
        cin >> x >> y >> k;

        sum = (x + y) / k;

        if(sum % 2 == 1){
            cout << "Paja" << endl;
        }
        else if(sum % 2 == 0){
            cout << "Chef" << endl;
        }
    }

    return 0;
}
