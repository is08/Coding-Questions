#include<iostream>
using namespace std;

int main(){
    int t, k;
    cin >> t;

    while(t--){
        cin >> k;
        int numOfCards = 52;

        int rem = numOfCards % k;

        cout << rem << endl;


    }
    return 0;
}
