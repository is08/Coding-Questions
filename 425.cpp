#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        float d;
        cin >> n >> d;

        int a, countOfRisk = 0, countOfNonRisk = 0;

        for(int i = 0; i < n; i++){
            cin >> a;

            if(a <= 9 || a >= 80){
                countOfRisk++;
            }
            else{
                countOfNonRisk++;
            }
        }

        cout << ceil(countOfRisk/d) + ceil(countOfNonRisk/d) << endl;
    }

    return 0;
}
