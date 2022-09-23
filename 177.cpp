#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int test, n, x;
    string s;
    cin >> test;

    while(test--){
        cin >> n >> x;
        cin >> s;
        vector<int> v;
        v.push_back(x);

        for(int i = 0; i < n; i++){
            if(s[i] == 'R'){
                x = x + 1;
                v.push_back(x);
            }
            else if(s[i] == 'L'){
                x = x - 1;
                v.push_back(x);
            }
        }

        sort(v.begin(), v.end());

        int count =  1;

        for(int i = 0; i < v.size() - 1; i++){
            if(v[i] != v[i + 1]){
                count++;
            }
        }

        cout << count << endl;

    }

    return 0;
}
