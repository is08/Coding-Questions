#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long int> a(n);

        int temp= 1, maxFreq = -10e8, i = 1;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        if(n <= 2){
            cout << 0 << '\n';
        }
        else{

            while(i < n){
                if(a[i] == a[i - 1]){
                    temp++;
                }
                else{
                    maxFreq = max(temp, maxFreq);
                    temp = 1;
                }
                i++;
            }

            cout << (n - maxFreq) << "\n";
        }
    }
    return 0;
}
