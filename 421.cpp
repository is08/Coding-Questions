#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    string m, w;

    while(t--){
        cin >> m >> w;

        int flag = 0, length = 0;

        if(m.length() <= w.length()){
            length = m.length();
        }
        else{
            length = w.length();
        }


        for(int i = 0; i < length; i++){
            if(m[i] != w[i]){
                cout << "m[i] " << m[i] << " and w[i] " << w[i] << endl;
                flag = 1;
                break;
            }
        }


        if(flag == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}
