#include<iostream>
using namespace std;

int main(){
    int test;
    string s;
    cin >> test;

    while(test--){
        cin >> s;
        int len = s.size(), index = 1;


        for(int i = 0; i < len - 1; i++){
            if(s[i] != s[i + 1]){
                ++index;
            }
        }

        cout << index <<endl;

        if(len > 2*index){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
