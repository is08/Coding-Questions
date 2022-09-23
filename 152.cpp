#include<iostream>
using namespace std;

int main(){
    int test, n, q;
    cin >> test;

    while(test--){
        cin >> n >> q;
        long long int f[q], d[q];

        for(int i = 0; i < q; i++){
            cin >> f[i] >> d[i];
        }

        long long int floor = 0;
        long long int curr_floor = 0;

        for(int i = 0; i < q; i++){
            floor = abs(curr_floor - f[i]) + abs(d[i] - f[i]) + floor;

            curr_floor = d[i];
        }

        cout << floor << endl;
    }

    return 0;
}
