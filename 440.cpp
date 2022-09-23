#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k, flag = 0, curr_pos = 0, pos_updated;
        cin >> n >> k;

        string s;
        cin >> s;

        while(k > 0){
            cout << "jumps left " << k << endl;
            for(int i = curr_pos + 1; i < n; i++){
                pos_updated = 0;
                if(s[i] != s[curr_pos]){
                    curr_pos = i;
                    pos_updated = 1;
                    k--;
                    break;
                    cout << "k is " << k << endl;
                }
            }
            if(pos_updated == 0){
                cout << "breaking" << endl;
                break;
            }
        }

        if(k > 0){
            cout << "-1\n";
        }
        else{
            cout << curr_pos + 1 << "\n";
        }
    }
    return 0;
}
