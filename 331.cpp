#include<iostream>
using namespace std;

int main(){
    int t, n, p, x, y;
    cin >> t;

    while(t--){
        cin >> n >> p >> x >> y;
        int a[n], time = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < p; i++){
            if(a[i] == 0){
                time += x;
            }
            else{
                time += y;
            }
        }

        cout << time << endl;

    }

    return 0;
}
