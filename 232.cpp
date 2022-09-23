#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        int x[n], best = 999, worst = -999, counting;

        for(int i = 0; i < n; i++){
            cin >> x[i];
        }

        for(int i = 0; i < n; i++){
            int left = i, right = i;

            while(left > 0 && abs(x[left] - x[left - 1]) <= 2){
                left--;
            }
            while(right < n - 1 && abs(x[right] - x[right + 1]) <= 2){
                right++;
            }

//cout << "left " << left << " & " << "right " << right << endl;
            int infected = (right - left + 1);
            best = min(infected, best);
            worst = max(infected, worst);
        }
        cout << best << " " << worst << endl;

    }

    return 0;
}
