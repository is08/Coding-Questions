#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        string s;
        cin >> s;

        int count = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'U' && s[i + 1] == 'D'){
                count++;
            }
        }

        cout << count << endl;
    }
}
