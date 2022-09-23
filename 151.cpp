#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        char s[n];
        char u[n];

        for(int i = 0; i < n; i++)
            cin >> s[i];

        for(int i = 0; i < n; i++)
            cin >> u[i];

        int score = 0;

        for(int i = 0; i < n; i++){
            if(u[i] == 'N'){
                continue;
            }
            else if(s[i] == u[i]){
                score++;
                continue;
            }
            else if(s[i] != u[i]){
                i++;
            }
        }

        cout << score << endl;
    }
}
