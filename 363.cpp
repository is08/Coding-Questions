#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int numberOfCards = 3, c, flag = 0;

        while(numberOfCards--){
            cin >> c;

            if(c == 7){
                flag = 1;
            }
        }

        if(flag == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
