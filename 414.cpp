#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int p[n], p1, p2;

        for(int i = 0; i < n; i++){
            cin >> p[i];
        }

        int countOfMin = 1;

        for(int i = 1; i < n; i++){
            p1 = max(i-5, 0);
            p2 = max(i-1, 0);
        }

        cout << countOfMin << endl;
    }

    return 0;
}
