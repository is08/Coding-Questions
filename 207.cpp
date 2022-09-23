#include<iostream>
using namespace std;

int main(){
    int test;
    string s;
    cin >> test;

    while(test--){
       cin >> s;
       int mong = 0, snak = 0;

       for(int i = 0; i < s.length(); i++){
            if(s[i] == 'm'){
                mong++;
            }
            if(s[i] == 's'){
                snak++;
            }
       }

       for(int i = 0; i < s.length() - 1; i++){
        if(s[i] != s[i + 1]){
            snak--;
            i = i + 1;
        }
       }
    }

    return 0;
}
