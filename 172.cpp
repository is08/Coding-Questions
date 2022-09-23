#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int price[26];
        string s;
        string alph = "abcdefghijklmnopqrstuvwxyz";

        for(int i = 0; i < 26; i++){
            cin >> price[i];
        }

        cin >> s;

        for(int i = 0; i < s.length(); i++){
            for(int j = 0; j < alph.length(); j++){
                if(s[i] == alph[j]){
                    price[j] = 0;
                    break;
                }
            }
        }

        int sum = 0;

        for(int i = 0; i < 26; i++){
            sum = sum + price[i];
        }

        cout << sum << endl;


    }
    return 0;
}
