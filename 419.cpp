#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        s = s + s[0];

        int red = 0, green = 0;

        for(int i = 0; i < s.length() - 1; i++){
            if(s[i] == s[i + 1]){
                if(s[i] == 'R'){
                    red++;
                }
                else{
                    green++;
                }
            }
        }

        if((red == 1 && green == 1) || (red == 0 && green == 0)){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }

    return 0;
}
