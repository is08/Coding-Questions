#include<iostream>
using namespace std;

int main(){
    int t, a[10], k;
    cin >> t;

    while(t--){

        for(int i = 0; i < 10; i++){
            cin >> a[i];
        }

        cin >> k;
        int j = 9;

        while(k > 0){
            if(k - a[j] >= 0){
                k = k - a[j];
                j--;
            }
            else{
                break;
            }
        }

        while(a[j] == 0){
            j--;
        }

        cout << j + 1 << endl;

    }

    return 0;
}
