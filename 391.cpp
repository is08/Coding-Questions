#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        set<string> distinctCodes;

        for(int i = 0; i < s.length()-1; i++){
            string a;
            a.append(s[i], s[i+1]);
            distinctCodes.insert(a);
        }

        cout << distinctCodes.size() << endl;
    }

    return 0;
}
