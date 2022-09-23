#include<iostream>
using namespace std;

int main(){
    int n, k, d, test;
    cin >> test;

    while(test--){
        cin >> n >> k >> d;
        int a, sum = 0;

        for(int i = 0; i < n; i++){
            cin >> a;
            sum += a;
        }


        int contests = sum / k;

        cout << min(contests, d) << endl;

    }

    return 0;
}
