#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a;

        int result = 0;

        for(int i = 0; i < n; i++){
            cin >> a;
            result = result ^ (a * 2);
        }

        cout << result << endl;

    }
    return 0;
}
