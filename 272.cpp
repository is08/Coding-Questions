#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int f[n];

        for(int i = 0; i < n; i++){
            cin >> f[i];
        }

        int total_fuel = f[0], distance = 0;

        for(int i = 1; i < n; i++){
            if(total_fuel >= 1){
                total_fuel--;
                total_fuel += f[i];
                distance++;
            }
            else{
                break;
            }
        }

        cout << distance + total_fuel << endl;

    }
    return 0;
}
