#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        string s;
        int isStarted = 0, errorOccured = 0;

        while(n--){
            cin >> s;

            if(s == "start"){
                if(isStarted == 0){
                    isStarted = 1;
                }
            }
            else if(s == "restart"){
                if(isStarted == 0){
                    isStarted = 1;
                }
            }
            else if(s == "stop"){
                if(isStarted == 0){
                    errorOccured = 1;
                }
                else{
                    isStarted = 0;
                }
            }
        }

        if(errorOccured == 1){
            cout << "404" << endl;
        }
        else{
            cout << "200" << endl;
        }
    }

    return 0;
}
