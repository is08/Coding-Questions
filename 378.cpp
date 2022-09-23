#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;

        if(n%4 == 0){
            cout << "Good" << endl;
        }
        else{
            cout << "Not Good" << endl;
        }

    }

    return 0;
}
