#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;

        int a, numberOfPositive = 0, numOfNegative = 0;

        for(int i = 0; i < n; i++){
            cin >> a;

            if(a > 0){
                numberOfPositive++;
            }
            else if(a < 0){
                numOfNegative++;
            }
        }

        if(numberOfPositive == 0){
            cout << numOfNegative << " " << numOfNegative << endl;
        }
        else if(numOfNegative == 0){
            cout << numberOfPositive << " " << numberOfPositive << endl;
        }
        else{
            cout << max(numberOfPositive, numOfNegative) << " " << min(numberOfPositive, numOfNegative) << endl;
        }
    }

    return 0;
}
