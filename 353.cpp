#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int i = 1, a, goalsByA = 0, goalsByB = 0;

    while(t--){
        while(i <= 10 && a == 1){
            cin >> a;
            if(i % 2 == 1){
                goalsByA++;
            }
            if(i % 2 == 0&& a == 1){
                goalsByB++;
            }
            i++;
        }

        if(goalsByA == goalsByB){
            cout << "0" << endl;
        }
        else if(goalsByA > goalsByB){
            cout << "1" << endl;
        }
        else if(goalsByB > goalsByA){
            cout << "2" << endl;
        }
    }

    return 0;
}
