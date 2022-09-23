#include<iostream>
#include<map>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, w;
        cin >> n >> w;

        int c[n], p[n], t[n];

        for(int i = 0; i < n; i++){
            cin >> c[i];
            cin >> p[i];
            cin >> t[i];
        }

        map<int, int> ans;

        for(int i = 0; i < n; i++){
            ans.insert({c[i]*p[i], t[i]});
        }

    }

    return 0;
}
