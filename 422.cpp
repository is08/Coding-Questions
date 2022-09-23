#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long int a[n];

        for(int i = 0 ; i < n; i++){
            cin >> a[i];
        }

        int countOfWrong = 0, j = -1;

        for(int i = 0; i < n - 1; i++){
            if(a[i] != a[i + 1]){

                if(i != j){
                    countOfWrong += 2;
                }
                else{
                    countOfWrong += 1;
                }

                j = i + 1;

            }
        }

        cout << countOfWrong << endl;
    }

    return 0;
}
