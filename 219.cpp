#inlude<iostream>
using namespace std;

int main(){
    int test, n, k;
    cin >> test;

    while(test--){
        cin >> n >> k;
        int w[n], count = 0;

        for(int i = 0; i < n; i++){
            cin >> w[i];
        }

        for(int i = 0; i < n; i++){
            if(w[i] > k){
                cout << "-1" << endl;
                break;
            }

        }
    }
    return 0;
}
