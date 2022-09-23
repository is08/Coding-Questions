#include<iostream>
using namespace std;

int main(){
    int t, n, x;
    cin >> t;

    while(t--){
        cin >> n >> x;

        if(n % 2 == 0){
            for(int i = (x - n/2); i <= (x + n/2); i++){
                if(i == x){
                    continue;
                }
                cout << i << " ";
            }
        }
        else{
            for(int i = (x - n/2); i <= (x + n/2); i++){
                cout << i << " ";
            }
        }

        cout << endl;

    }

    return 0;
}
