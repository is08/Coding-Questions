#include<iostream>
using namespace std;

int main(){
    int test;
    long long int n, a, b, k;
    cin >> test;

    while(test--){
        cin >> n >> a >> b >> k;
        int cnt = 0;

        for(int i = 1; i <= n; i++){
            if(i % a == 0 && i % b != 0){
                cnt++;
            }
            else if(i % a != 0 && i % b == 0){
                cnt++;
            }
        }

        if(cnt >= k){
            cout << "Win" << endl;
        }
        else{
            cout << "Lose" << endl;
        }

    }

    return 0;
}
