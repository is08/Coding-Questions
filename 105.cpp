#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;
        int x = 0, y = 0;
        string s;
        cin >> s;

        for(int i = 0; i < n; i++){
            if(s[i] == 'L' && s[i - 1] != 'R' && s[i - 1] != 'L'){
                x = x - 1;
            }
            else if(s[i] == 'R' && s[i - 1] != 'L' && s[i - 1] != 'R'){
                x = x + 1;
            }
            else if(s[i] == 'U' && s[i - 1] != 'D' && s[i - 1] != 'U'){
                y = y + 1;
            }
            else if(s[i] == 'D' && s[i - 1] != 'U' && s[i - 1] != 'D'){
                y = y - 1;
            }
        }


        cout<<x<<" "<<y<<endl;
    }

    return 0;
}
