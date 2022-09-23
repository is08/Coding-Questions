#include<iostream>
using namespace std;

int main(){
    int t, n, m;
    cin >> t;

    while(t--){
        cin >> n >> m;
        int length = 0;
        char curr;

        if(n >= m){
            curr = '0';
        }
        else{
            curr = '1';
        }

        cout << (n + m + 2) << endl;

        while(length < (n + m + 2)){
            cout << curr;

            if(curr == '0'){
                curr = '1';
            }
            else{
                curr = '0';
            }

            length++;
        }

        cout << endl;
    }

    return 0;
}
