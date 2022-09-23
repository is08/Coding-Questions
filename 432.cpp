#include<iostream>
#include<map>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    string s;
    char m;

    while(t--){
        cin >> n;
        map<string, int> mp;

        while(n--){
            cin >> s;
            cin >> m;

            if(m == '-'){
                mp[s] = -1;
            }
            else{
                mp[s] = 1;
            }
        }

        int sum = 0;

        for(auto &x: mp){
            sum += x.second;
        }

        cout << sum << endl;
    }

    return 0;
}
