#include<iostream>
using namespace std;

int main(){
    int test, n, m;
    cin >> test;

    while(test--){
        cin >> n >> m;
        string s[n];

        for(int i = 0; i < n; i++){
            cin >> s[i];
        }

        int collision = 0;

        for(int i = 0; i < m; i++){
            int num = 0;
            for(int j = 0; j < n; j++){
                if(s[j][i] == '1'){
                    num++;
                }
            }
            collision = collision + num * (num - 1)/2;
        }

        cout << collision << endl;

    }
}
