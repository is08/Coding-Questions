#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        string s;
        cin >> s;
        int index = 0;
        int freq[n] = {1};

        sort(s.begin(), s.end());

        for(int i = 1; i < n; i++){
            if(s[i] == s[i - 1]){
                freq[index] = freq[index] + 1;
            }
            else{
                index = index + 1;
                freq[index] = 1;
            }
        }

        int flag = 0;

        for(int i = 0; i < n; i++){
            if(freq[i] % 2 != 0){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }

    }

    return 0;
}
