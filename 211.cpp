#include<iostream>
using namespace std;

int main(){
    int test, n, n2;
    string s, s2;
    cin >> test;

    while(test--){
        cin >> n >> s;

        int laddoos = 0;

        while(n--){
            cin >> s2;

            if(s2 == "CONTEST_WON" ){
                cin >> n2;
                if(n2 <= 20){
                    laddoos = laddoos + 300 + 20 - n2;
                }
                else if(n2 > 20){
                    laddoos = laddoos + 300;
                }
            }
            else if(s2 == "TOP_CONTRIBUTOR"){
                laddoos = laddoos + 300;
            }
            else if(s2 == "BUG_FOUND"){
                cin >> n2;
                laddoos = laddoos + n2;
            }
            else if(s2 == "CONTEST_HOSTED"){
                laddoos = laddoos + 50;
            }
        }


        if(s == "INDIAN"){
            cout << laddoos / 200 << endl;
        }
        else if(s == "NON_INDIAN"){
            cout << laddoos / 400 << endl;
        }
    }

    return 0;
}
