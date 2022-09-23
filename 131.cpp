#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test -- ){
        string s;
        cin >> n >> s;
        char t[n];
        int index = 0;


        for(int i = 0; i < n / 2; i++){
            char temp = s[index];
            s[index] = s[index + 1];
            s[index + 1] = temp;
            index = index + 2;
        }


        string alphabet = "abcdefghijklmnopqrstuvwxyz";

        for(int i = 0; i < n; i++){
            for(int j = 0; j < alphabet.length(); j++){
                if(s[i] == alphabet[j]){
                    t[i] = alphabet[alphabet.length() - j - 1];
                }
            }
        }

        for(int i = 0; i < n; i++){
            cout << t[i];
        }
        cout << endl;

    }
    return 0;
}


