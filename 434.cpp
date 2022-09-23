#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int pos = 0, count = 0;

        for(int i = 0; i < n; i++){
            if(a[i] == (pos + 1)){
                pos += 2;
                count++;
            }
            else{
                pos += 1;
            }
        }

        cout << count << endl;
    }

    return 0;
}
