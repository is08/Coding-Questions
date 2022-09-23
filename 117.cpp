#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, cnt1 = 0, cnt2 = 0;
        cin >> n;

        string s, r;
        cin >> s >> r;

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                cnt1++;
            }
            if(r[i] == '1'){
                cnt2++;
            }
        }

        if(cnt1 == cnt2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
