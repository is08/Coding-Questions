#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int maxW = -10e8, pos = 0, w;

        for(int i = 0; i < n; i++){
            cin >> w;

            if(w > maxW){
                maxW = w;
                pos = i;
            }
        }


        cout << (maxW + pos) << endl;

    }
    return 0;
}
