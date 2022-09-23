#include<iostream>
using namespace std;

int main(){
    int n, m, k, count = 0;
    cin >> n >> m >> k;

    while(n--){

        int t[k + 1], sum = 0;

        for(int i = 0; i < k + 1; i++){
            cin >> t[i];
        }

        cout << "q is " << t[k];

        for(int i = 0; i < k; i++){
            sum = sum + t[i];
        }

        cout << "sum of all the minutes is " << sum << endl;

        if(sum >= m && t[k] <= 10){
            count++;
        }

    }

    cout << count << endl;

    return 0;
}
