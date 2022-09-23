#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        string s[3];
        cin >> s[0] >> s[1] >> s[2];
        int flag = 0;

        for(int i = 0; i < 2; i++){
            for(int j = 0; j < s[i].length(); j++){
                if(s[i][j] == 'l'){
                    if(s[i + 1][j] == 'l' && s[i + 1][j + 1] == 'l'){
                        flag = 1;
                        break;
                    }
                }
            }
        }

        if(flag == 1){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }

    return 0;
}
