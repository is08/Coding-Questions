#include<iostream>
using namespace std;

int main(){
    long long int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        char corr_answer[n], answer[n];
        int winning[n + 1];

        for(int i = 0; i < n; i++){
            cin >> corr_answer[i];
        }

        for(int i = 0; i < n; i++){
            cin >> answer[i];
        }

        for(int i = 0; i < n + 1; i++){
            cin >> winning[i];
        }

        int max = winning[0];

        for(int i = 0; i < n ; i++){
            if(answer[i] == corr_answer[i]){
                max = winning[i + 1];
            }
        }

        cout << max << endl;



    }

    return 0;
}
