#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        long long int a[n];
        float sum = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }

        long long int coin = 10e9, number = -1;
        float mean = sum / n, temp;
        int flag = 0;

        for(int i = 0; i < n; i++){
            temp = sum;
            temp = temp - a[i];
            float temp_mean = temp / (n - 1);

            if(temp_mean == mean){
                if(a[i] < coin){
                    number  = i;
                    coin = a[i];
                    flag = 1;
                }
            }
        }

        if(flag)
            cout << number + 1 << endl;
        else
            cout << "Impossible" << endl;

    }

    return 0;
}
