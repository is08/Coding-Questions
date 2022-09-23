#include<iostream>
using namespace std;

int main(){
    int t, n, m, k;
    cin >> t;

    while(t--){
        cin >> n >> m >> k;
        int a, passingMTestcases = 0, passingNTestCases = 0;

        for(int i = 0; i < n; i++){
            cin >> a;

            if(a == 1){
                if(i < m){
                    passingMTestcases++;
                }
                passingNTestCases++;
            }
        }

        if(passingMTestcases < m){
            cout << "0" << endl;
        }
        else if(passingMTestcases == m){
            if(passingNTestCases == n){
                cout << "100" << endl;
            }
            else{
                cout << k << endl;
            }
        }
    }

    return 0;
}
