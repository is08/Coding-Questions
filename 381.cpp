#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int length = s.length();

        string leftShift = s.substr(1, length - 1) + s[0];
        string rightShift = s[length- 1] + s.substr(0, length - 1);

        if(leftShift == rightShift){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}
