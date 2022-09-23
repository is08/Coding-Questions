#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string n;
        cin >> n;
        int flag = 0;

        for(int i = 0; i <= n.length()/2; i++){
            if(n[i] != n[n.length() - i - 1]){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            cout << "loses" << endl;
        }
        else{
            cout << "wins" << endl;
        }
    }

    return 0;
}
