#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        string s[n];
        string prob[7] = {"cakewalk", "simple", "easy", "easy-medium", "medium", "medium-hard", "hard"};
        int freq[7] = {0};


        for(int i = 0; i < n; i++){
            cin >> s[i];
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < 7; j++){
                if(s[i] == prob[j]){
                    freq[j] = freq[j] + 1;
                }
            }
        }

        int flag = 0;

        if(freq[0] == 0 || freq[1] == 0 || freq[2] == 0){
            flag = 1;
        }

        if(freq[3] == freq[4] && freq[3] == 0){
            flag = 1;
        }

        if(freq[5] == freq[6] && freq[5] == 0){
            flag = 1;
        }

        if(flag == 1){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }


    }
}
