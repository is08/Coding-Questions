#include<iostream>
using namespace std;

int main(){
    long long int t, e, k;
    cin >> t;

    while(t--){
        cin >> e >> k;
        int Count = 0;


        while(e){
            e /= k;
            Count++;
        }

        cout << Count << endl;
    }

    return 0;
}
