#include<iostream>
using namespace std;

int main(){
    int testCases, x;
    cin >> testCases;

    while(testCases--){
        cin >> x;

        int rem = x % 4;

        if(rem == 1){
            cout << "East" << endl;
        }
        else if(rem == 2){
            cout << "South" << endl;
        }
        else if(rem == 3){
            cout << "West" << endl;
        }
        else if(rem == 0){
            cout << "North" << endl;
        }
    }

    return 0;
}
