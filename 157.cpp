#include<iostream>
#include<string>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        string s;
        cin >> s;

        char last = s[n - 1];
        int flag = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == last){
                flag = 1;
            }
        }

        if(flag == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
