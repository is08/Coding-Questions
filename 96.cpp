#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        string s;
        cin >> s;
        int flag = 0;

        for(int i = 0; i < s.length() - 1; i++){
            if(s[i] == s[i + 1]  || s[i] != s[i + 2]){
                flag = 1;
            }
        }

        if(flag == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
