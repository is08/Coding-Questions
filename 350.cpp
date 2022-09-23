#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s;

    while(t--){
        cin >> s;
        int countOfP = 0, countOfC = 0, countOfM = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'P'){
                countOfP += 1;
            }
            if(s[i] == 'C'){
                countOfC += 1;
            }
            if(s[i] == 'M'){
                countOfM += 1;
            }
        }

        if(countOfP == 1 && countOfC == 1 && countOfM == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}
