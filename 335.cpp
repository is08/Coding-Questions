#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        string s;
        cin >> s;

        if(n == 1){
            cout << "YES" << endl;
        }
        else if(n == 2){
            if(s == "00" || s == "11"){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
