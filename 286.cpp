#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int c, l, x;
        int chosen_city[3] = {0}, chosen_discount[3] = {0};

        for(int i = 0; i < n; i++){
            cin >> c >> l >> x;
            l--;

            if(x > chosen_discount[l] || x == chosen_discount[l] && c < chosen_city[l]){
                chosen_discount[l] = x;
                chosen_city[l] = c;
            }
        }

        for(int i = 0; i < 3; i++){
            cout << chosen_discount[i] << " " << chosen_city[i] << endl;
        }


    }

    return 0;
}
