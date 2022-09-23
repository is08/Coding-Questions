#include<iostream>
using namespace std;

int main(){
    int t, a, b;
    cin >> t;

    while(t--){
        int countOfOneInA = 0, countOfZeroInA = 0, countOfOneInB = 0, countOfZeroInB = 0;

        for(int i = 0; i < 3; i++){
            cin >> a;
            if(a == 1){
                countOfOneInA++;
            }
            else{
                countOfZeroInA++;
            }
        }

        for(int i = 0; i < 3; i++){
            cin >> b;
            if(b == 1){
                countOfOneInB++;
            }
            else{
                countOfZeroInB++;
            }
        }

        if(countOfOneInA == countOfOneInB){
            if(countOfZeroInA == countOfZeroInB){
                cout << "Pass" << endl;
            }
        }
        else{
            cout << "Fail" << endl;
        }

    }

    return 0;
}
