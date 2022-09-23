#include<iostream>
using namespace std;

int main(){
    int t, a, b;
    cin >> t;

    while(t--){
        cin >> a >> b;

        int sum = (a + b);

        if(sum < 3){
            cout << 1 << endl;
        }
        else if(3 <= sum && sum <= 10){
            cout << 2 << endl;
        }
        else if(11 <= sum && sum <= 60){
            cout << 3 << endl;
        }
        else if(sum > 60){
            cout << 4 << endl;
        }
    }

    return 0;
}
