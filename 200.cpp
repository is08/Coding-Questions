#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        long long int p1, p2, k;
        cin >> p1 >> p2 >> k;

        if(((p1 + p2) / k) % 2 == 0){
            cout << "CHEF" << endl;
        }
        else if(((p1 + p2) / k) % 2 == 1){
            cout << "COOK" << endl;
        }

    }
    return 0;
}
