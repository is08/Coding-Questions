#include<iostream>
using namespace std;

int main(){
    int test;
    string s;
    cin >> test;

    while(test--){
        cin >> s;

        int count = 0;

        for(int i = 0; i < s.length() - 1; i++){
            if(s[i] != s[i + 1]){
                count++;
                i++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
